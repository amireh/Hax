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

#ifndef H_HAX_ENGINE_H
#define H_HAX_ENGINE_H

#include "Hax/Hax.hpp"

namespace Hax
{

	/** 
	 *  Skeleton Engine that defines the base behaviour of all game engines
	 */
  class Engine
  {
    public:
    
    inline virtual ~Engine()
    { 
      fSetup = false;
    }

    /**
     * Resource allocation should be done in this method.
     */
    virtual bool setup()=0;
    
    /**
     * All registered Engine instances will be called to update(), or step, every
     * frame.
     * 
     * @param lTimeElapsed
     * The number of milliseconds elapsed since the last time update() was called.
     */
    virtual void update(unsigned long lTimeElapsed)=0;
    
    /**
     * A chance to clean up all the allocated resources by this engine.
     */
    virtual bool cleanup()=0;

  protected:
    inline Engine()
    : fSetup(false)
    { 
    }
    
    bool fSetup;
  private:
    Engine(const Engine& src);
    Engine& operator=(const Engine& rhs);
  };
};



#endif
