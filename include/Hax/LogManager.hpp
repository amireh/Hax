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

#ifndef H_HAX_LOG_MANAGER_H
#define H_HAX_LOG_MANAGER_H

#include "Hax/Hax.hpp"
#include "Hax/Log.hpp"
#include "Hax/Configurable.hpp"

#include <boost/filesystem.hpp>

namespace Hax {

  /**
   * @class LogManager
   * 
   * Manages a logging system through log4cpp that can be used by an application
   * to log messages to a number of output devices; stdout, a file, or syslog.
   * 
   * Logging devices and the format of messages are configurable.
   * 
   * Actual logging of the messages should be done by by instances derived from
   * Hax::Logger (see Hax/Logger.hpp).
   */
  class LogManager : public Configurable {
  public:

    static LogManager& getSingleton();
       
    /** The unique log4cpp::category identifier, used internally by logger instances */
    string_t const& getCategory();

    virtual ~LogManager();
    LogManager(const LogManager&) = delete;
    LogManager& operator=(const LogManager&) = delete;
    
    /** 
     * Initializes the logging system, this must be called before the LogManager
     * is configured.
     * 
     * @param category_name 
     *  A unique identifier for the primary logging category used to create
     *  instances of loggers. (Note: this string will not be visible in logs.)
     **/
    void init(string_t inCategoryName = "Hax");
    
    /** 
     * If you init() the log manager, you must call this when you're done
     * to free allocated resources.
     * 
     * @warning
     * Any attempt to log messages once the log manager is cleaned up might
     * result in undefined behaviour.
     */
    void cleanup();
    
    /**
     * Re-builds the logging system with the current configuration settings.
     *
     * @note
     * For internal implementation reasons, the log manager does not subscribe
     * itself to the "log manager" configuration context automatically; you must
     * do that somewhere BEFORE the configuration is parsed.
     * 
     * IE, somewhere before you parse configuration file:
     *  configurator::subscribe(&LogManager::singleton(), "log manager");
     */
    virtual void configure();

    /** overridden from Hax::configurable */
    virtual void setOption(string_t const& key, string_t const& value);
    virtual void setDefaults();
    
    /** a log that can be used by any entity that is not a derivative of Hax::logger */
    log_t* getLog();

    void setSilent(bool);
        
  private:    
    explicit LogManager();
    static LogManager* __instance;
       
    log4cpp::Appender *mAppender;
    log4cpp::Layout   *mLayout;
    log4cpp::Category *mCategory;
    log4cpp::Category	*mLog;
    log4cpp::Category	*mAnonymousLog;

    string_t mCategoryName;

    /* the log manager's config context is "log manager" */
    struct config_t {
      string_t device;   /** possible values: 'stdout' or 'syslog' or 'file', default: 'file' */
      string_t level;    /** possible values: 'debug', 'notice', 'info', 'warn', 'error', default: 'debug' */
      
      /* the following apply only when logging to a file */
      string_t dir;      /** default: "log", the log file will be in /path/to/app/log/mLogname.log */
      string_t filename;     /** default: "Hax.log" */
      string_t filesize; /** value format: "[NUMBER][B|K|M]", default: 10M */

      string_t app_name;
      string_t app_version;
      string_t app_website;
      
      bool     silent;
    } mConfig;    
  };

# ifndef HAX_LOG
#   define HAX_LOG Hax::LogManager::getSingleton().getLog()
# endif

} // namespace Hax

#endif // H_HAX_LOG_MANAGER_H
