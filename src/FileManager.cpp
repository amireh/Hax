/*
 *  Copyright (c) 2011-2012 Ahmad Amireh <ahmad@amireh.net>
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *
 */

#include "Hax/FileManager.hpp"
#include "Hax/Utility.hpp"

#include <map>

namespace Hax {

  FileManager* FileManager::__instance = 0;
  uint64_t FileManager::mDownloadId = 0;

  FileManager::FileManager()
  : Configurable({"file manager"}),
    Logger("file manager")
  {
    
#   if HAX_PLATFORM == HAX_PLATFORM_WIN32
    mSuffix = "win32";
#   elif HAX_PLATFORM == HAX_PLATFORM_APPLE
    mSuffix = "osx";
#   else
    mSuffix = "linux";
#   endif

  }

  FileManager::~FileManager()
  {
  }

  FileManager& FileManager::getSingleton() {
    if (!__instance)
      __instance = new FileManager();

    return *__instance;
  }

  void FileManager::resolvePaths()
  {
    using boost::filesystem::is_directory;
    using boost::filesystem::create_directories;
    using boost::filesystem::create_directory;
    using boost::filesystem::exists;

    bool dontOverride = false;

    mLog->infoStream() << "Resolving paths...";

    // locate the binary and build its path
    
    // 1. Linux:
#   if HAX_PLATFORM == HAX_PLATFORM_LINUX

    mLog->infoStream() << "Platform: Linux";
    
    // use binreloc and boost::filesystem to build up our paths
    int brres = br_init(0);
    string_t path;
    if (brres == 0)
    {
      mLog->errorStream() << "binreloc could not be initialised";
      path = ".";
    } else {
      char *p = br_find_exe_dir(".");
      path = string_t(p);
      free(p);
    }
      
    mBinPath = path_t(path).make_preferred();
    
    // 2. Mac OS X
#   elif HAX_PLATFORM == HAX_PLATFORM_APPLE

    // use NSBundlePath() to build up our paths
    mBinPath  = path_t(Utility::macBundlePath() + "/Contents/MacOS");
    mRootPath = path_t(Utility::macBundlePath() = "/Contents");
    mPlgPath  = path_t(Utility::macBundlePath() + "/Contents/Plugins");
    mResPath  = path_t(Utility::macBundlePath() + "/Contents/Resources");
    mCfgPath  = path_t(Utility::macBundlePath() + "/Contents/Resources/config");
    mLogPath  = path_t(Utility::macBundlePath() + "/Contents/Logs");
    mScriptsPath  = path_t(Utility::macBundlePath() + "/Contents/Resources/scripts");

    dontOverride = true;
    
    // 3. Windows
#   else
    // use GetModuleFileName() and boost::filesystem to build up our paths on Windows
    TCHAR szPath[MAX_PATH];

    if( !GetModuleFileName( NULL, szPath, MAX_PATH ) )
    {
        printf("Cannot install service (%d)\n", GetLastError());
        throw std::runtime_error("could not get runpath!");
    }

    mBinPath = path_t(string_t(szPath)).remove_filename().make_preferred();
#endif

    // root is HAX_DISTANCE_FROM_ROOT directories up from the binary's
    path_t lRoot = mBinPath;
    int i;
    for (i=0; i < Utility::convertTo<int>(mConfig.DistFromRoot); ++i) {
      lRoot = lRoot.remove_leaf();
    }

    mRootPath = lRoot.make_preferred();
    
    if (!dontOverride) {
      mResPath = (mRootPath / "resources").make_preferred();
      mCfgPath = (mResPath  / "config").make_preferred();
      mLogPath = (mRootPath / "log").make_preferred();
      mScriptsPath = (mRootPath / "scripts").make_preferred();
      mPlgPath = mBinPath;
    }

    if (!is_directory(mLogPath))
    {
      try {
        if (!create_directories(mLogPath))
        {
          throw std::runtime_error("Couldn't create log directory!");
        }
      } catch(...) {
        throw std::runtime_error("Couldn't create log directory!");
      }
    }

    std::cout << "Root path: " <<  mRootPath << '\n';
    std::cout << "Binary path: " <<  mBinPath << '\n';
    std::cout << "Plugin path: " <<  mPlgPath << '\n';
    std::cout << "Config path: " <<  mCfgPath << '\n';
    std::cout << "Resources path: " <<  mResPath << '\n';
    std::cout << "Scripts path: " <<  mScriptsPath << '\n';
    std::cout << "Log path: " <<  mLogPath << '\n';
  }

  void FileManager::setOption(string_t const& key, string_t const& value)
  {
    if (key == "DistFromRoot" || key == "dist from root") {
      mConfig.DistFromRoot = value;
    }
    else {
      std::cerr << "unknown FileManager config setting '" << key << "' => '" << value << "', discarding";
    }
  }

  void FileManager::setDefaults() {
    mConfig.DistFromRoot = "1";
  }
  
  path_t const& FileManager::getRootPath()  const { return mRootPath; }
  path_t const& FileManager::getResourcesPath()   const { return mResPath; }
  path_t const& FileManager::getResPath()   const { return getResourcesPath(); }
  path_t const& FileManager::getPluginsPath()   const { return mPlgPath; }
  path_t const& FileManager::getPlgPath()   const { return getPluginsPath(); }
  path_t const& FileManager::getBinaryPath()   const { return mBinPath; }
  path_t const& FileManager::getBinPath()   const { return getBinaryPath(); }
  path_t const& FileManager::getConfigPath()   const { return mCfgPath; }
  path_t const& FileManager::getCfgPath()   const { return getConfigPath(); }
  path_t const& FileManager::getLogPath()   const { return mLogPath; }
  path_t const& FileManager::getScriptsPath()   const { return mScriptsPath; }
  
  string_t const& FileManager::getSuffix() const {
    return mSuffix;
  }
  
  static size_t onCurlData(char *buffer, size_t size, size_t nmemb, void *userdata)
  {
    return FileManager::getSingleton().__onCurlData(buffer, size, nmemb, userdata);
  }
  
  bool FileManager::loadFile(std::ifstream &fs, string_t& out_buf)
  {
    if (!fs.is_open() || !fs.good()) return false;
    
    while (fs.good())
      out_buf.push_back(fs.get());
    
    out_buf.erase(out_buf.size()-1,1);
    
    mLog->debugStream() << "read file into memory: \n" << out_buf;
    return true;
  }
  
  bool FileManager::getResource(string_t const& resource_path, string_t& out_buf)
  {
    bool is_remote = (resource_path.substr(0,4) == "http");
    if (is_remote)
      return getRemote(resource_path, out_buf);
    
    std::ifstream fs(resource_path);
    // open the file and load it into the string
    if (!fs.is_open() || !fs.good())
    {
      mLog->errorStream() << "local resource is not readable; " << resource_path;
      return false;
    }
    
    bool result = loadFile(fs, out_buf);
    fs.close();
    
    return result;
  }
  
  bool FileManager::getRemote(string_t const& in_URL, string_t& out_buf)
  {
    
    // now use CURL to hit dakapi
    CURL* curl_ = curl_easy_init();
    CURLcode curlrc_;
    
    if (!curl_) {
      mLog->errorStream() << "unable to resolve URL " << in_URL << ", aborting remote download request";
      return false;
    }
  
    download_t *dl = new download_t();
    dl->id = ++mDownloadId;
    dl->buf = &out_buf;
    dl->status = false;
    dl->uri = in_URL;
    
    char curlerr[CURL_ERROR_SIZE];
    
    curl_easy_setopt(curl_, CURLOPT_ERRORBUFFER, curlerr);
    curl_easy_setopt(curl_, CURLOPT_URL, in_URL.c_str());
    curl_easy_setopt(curl_, CURLOPT_WRITEFUNCTION, &onCurlData);
    curl_easy_setopt(curl_, CURLOPT_WRITEDATA, dl); 
    
    curlrc_ = curl_easy_perform(curl_);
    if (curlrc_ != 0) {
      mLog->errorStream() << "a CURL error was encountered; " << curlrc_ << " => " << curlerr;
      delete dl;
      return false;
    }
    
    long http_rc = 0;
    curl_easy_getinfo(curl_, CURLINFO_RESPONSE_CODE, &http_rc);
    
    if (http_rc != 200) {
      mLog->errorStream() << "remote server error, HTTP code: " << http_rc << ", download failed";
      delete dl;
      return false;
    }

    /* always cleanup */
    curl_easy_cleanup(curl_);
    delete dl;
    return true;
  }
  
  size_t FileManager::__onCurlData(char *buffer, size_t size, size_t nmemb, void *userdata)
  {
    download_t *dl = (download_t*)userdata;
    
    size_t realsize = size * nmemb;
    (*dl->buf) += string_t(buffer);
    
    return realsize;
  }
 
  
} // namespace Hax
