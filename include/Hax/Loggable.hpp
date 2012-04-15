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

#ifndef H_HAX_LOGGABLE_H
#define H_HAX_LOGGABLE_H

namespace Hax
{
	/*!
   * @brief
   * Loggable objects respond to the operator<< for logging to an std::ostream.
	 */
	class Loggable
	{
    public:
		Loggable() {}
		Loggable& operator=(const Loggable& rhs) { return *this; }
		Loggable(const Loggable& src) {}
		virtual ~Loggable() {}

    inline friend std::ostream& operator<<(std::ostream& inStream, Loggable const* inLoggable)
    {
      return inLoggable->toStream(inStream);
    }

    inline friend std::ostream& operator<<(std::ostream& inStream, Loggable const& inLoggable)
    {
      return inLoggable.toStream(inStream);
    }

    inline virtual std::string dump() const {
      return "";
    };

		protected:
    virtual std::ostream& toStream(std::ostream& inStream) const=0;

	}; // end of Loggable class
} // end of Hax namespace
#endif