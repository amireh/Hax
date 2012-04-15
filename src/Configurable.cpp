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

#include "Hax/Configurable.hpp"
#include "Hax/Configurator.hpp"

namespace Hax {

  Configurable::Configurable()
  {
    setDefaults();
  }
  
  Configurable::Configurable(std::vector<string_t> contexts)
  {
    for (auto ctx : contexts)
      subscribeContext(ctx);

    setDefaults();
  }
  
  Configurable& Configurable::operator=(const Configurable& rhs)
  {
    if (this != &rhs) copy(rhs);

    return *this;
  }

  Configurable::Configurable(const Configurable& src)
  {
    copy(src);
  }

  Configurable::~Configurable()
  {
    mContexts.clear();
  }

  void Configurable::copy(const Configurable& src)
  {
    mCurrentCtx = src.mCurrentCtx;
    mContexts = src.mContexts;
  }
  
  void Configurable::subscribeContext(string_t const& ctx)
  {
    Configurator::subscribe(this, ctx);
    mContexts.push_back(ctx);
  }
  
  bool Configurable::isSubscribedToContext(string_t const& in_ctx)
  {
    for (auto ctx : mContexts)
      if (ctx == in_ctx) return true;
      
    return false;
  }
  
}
