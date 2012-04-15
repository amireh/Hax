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

#ifndef H_HAX_CONFIGURABLE_H
#define H_HAX_CONFIGURABLE_H

#include "Hax/Hax.hpp"
#include <vector>

namespace Hax {

  class Configurator;
  
  /**
   * @class Configurable
   *
   * Configurables can subscribe themselves to "contexts" that contain settings
   * related to them and will be called with the defined settings when the configuration
   * is parsed.
   */
  class Configurable {
  public:

    /**
     * Default ctor, does not subscribe to any context: you must manually do that by calling
     * Configurable::subscribeContext().
     */
    explicit Configurable();
    
    /** 
     * Subscribes this instance to every context in the list.
     *
     * @note
     * You clearly don't have to call Configurator::subscribeContext() anymore
     * if you use this constructor.
     */
    explicit Configurable(std::vector<string_t> contexts);
    
    Configurable(const Configurable&);    
    Configurable& operator=(const Configurable&);

    virtual ~Configurable();

    /** Called whenever a cfg setting is encountered and parsed. */
    virtual void setOption(string_t const& key, string_t const& value)=0;

    /** 
     * All Configurables must provide some defaults that will be set when
     * they're constructed.
     */
    virtual void setDefaults() = 0;
    
    /**
     * Called when the config section is fully parsed, implementations
     * can do the actual configuration here if needed.
     * 
     * @note
     * Sometimes this isn't really required as an implementation could configure
     * itself on-the-fly as setOption() is called, but others might have dependant
     * options.
     */
    inline virtual void configure() { }
    
    /** Is this instance subscribed to this configuration context? */
    bool isSubscribedToContext(string_t const&);
    
  protected:
    friend class Configurator;
    
    /** This instance will be called whenever the given context is encountered. */
    void subscribeContext(string_t const&);
    
    /** 
     * When a Configurable is subscribed to more than 1 context,
     * this string can be used to determine the current context being parsed.
     */
    string_t mCurrentCtx;
    
    std::vector<string_t> mContexts;
    
    void copy(const Configurable& src);
  };
}

#endif
