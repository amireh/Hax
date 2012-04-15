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

#ifndef H_HAX_CONFIGURATOR_H
#define H_HAX_CONFIGURATOR_H

#include "Hax/Hax.hpp"
#include "Hax/Logger.hpp"
#include "Hax/Configurable.hpp"

#include <map>

#include <yajl/yajl_parse.h>
#include <yajl/yajl_gen.h>

namespace Hax {

  /**
   * @class Configurator
   * 
   * Parses a JSON configuration sheet and calls all subscribed Configurable objects
   * with their options.
   */
  class Configurator : public Logger {
  public:

    Configurator(string_t const& json_data);
    Configurator(std::ifstream& json_file_handle);
    
    virtual ~Configurator();
    Configurator(const Configurator&) = delete;
    Configurator& operator=(const Configurator&) = delete;
   
    static void init();
    
    /**
     * performs the actual parsing and configuration of subscribed instances
     */
    void run();
    
    /** 
     * subscribed the given Configurable to its configuration context;
     * once that context is encountered in a configuration file, the object
     * will be passed the options to handle them
     * 
     * @note
     * a context can be assigned at most 1 Configurable at any time,
     * but a Configurable can handle many contexts
     */
    static void subscribe(Configurable*, string_t const& context);

    int __onJsonMapStart();
    int __onJsonMapKey(const unsigned char*, size_t);
    int __onJsonMapVal(const unsigned char*, size_t);
    int __onJsonMapEnd();
    int __onJsonArrayStart();
    int __onJsonArrayEnd();
    
  private:
  
    /** 
     * Is the JSON key a keyword reserved by the Configurator?
     * 
     * Currently, only "include" is reserved.
     * */
    bool isReserved(const string_t& ctx);
    
    typedef std::map<string_t, Configurable*> subs_t;
    static subs_t mSubs;
    static bool fInit;
    
    string_t mData;

    string_t      mCurrKey;
    string_t      mCurrVal;
    string_t      mCurrCtx;
    Configurable  *mCurrSub;
    int           mDepth;
   
    enum {
      yajl_continue = 1, /** continue parsing */
      yajl_stop = 0 /** stop parsing */
    };

  };

} // namespace Hax

#endif // H_HAX_CONFIGURATOR_H
