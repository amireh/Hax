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

#ifndef H_HAX_SERIALIZABLE_H
#define H_HAX_SERIALIZABLE_H

#include "Hax/Hax.hpp"
#include <string>

namespace Hax
{
	/**
   * @class Serializable
   *
	 * @brief
   * Serializable objects offer an interface that allow objects to capture and
   * transmit their state across the network or the filesystem.
   *
   * An object can optionally be serialized on a number of _levels_ each of which
   * can control the amount of state that is captured in the serialization.
   *
   * Using separate levels of marshalling gives flexibility in how much data
   * will be transmitted; if there are certain fields that are not needed at a
   * certain stage, simply don't serialize them.
	 */
	class Serializable {

    public:

		Serializable();
		Serializable& operator=(const Serializable& rhs);
		Serializable(const Serializable& src);
		virtual ~Serializable();

    /**
     * @brief
     * Writes this object out onto a stringstream in order to be re-created
     * on the receiving end.
     *
     * The serializing format differs between objects and must be matched by
     * the deserializing routine, naturally.
     *
     * @param inStream the stream onto which this object will be serialized
     * @param inLevel the level at which this object will be serialized
     *
     * @note
     * The serialized dump must start with Serializable::Prefix, end with
     * Serializable::Suffix, and all serialized fields must be separated by
     * Serializable::Separator. Otherwise an exception will be thrown on the
     * receiving end.
     *
     * @warning
     * If the passed level is not recognized by the serialization routine,
     * an std::runtime_error exception will be thrown.
     **/
    virtual void serialize(std::ostringstream& inStream, int inLevel=0)=0;

    /**
     * @brief
     * Populates this object's members from the serialized attributes written
     * by serialize() from the sending end.
     *
     * This method can raise an exception of type BadFormat if the given
     * string can not be parsed properly.
     *
     * @param inDump the stream from which this object will be re-created
     * @param inLevel the level at which this object is to be deserialized,
     *                note that this level must match that at which the object
     *                was serialized
     *
     * @warning
     * If the passed level is not recognized by the serialization routine,
     * or there is missing data required by the given level, an std::runtime_error
     * exception will be thrown.
     **/
    virtual void deserialize(std::string const& inDump, int inLevel=0)=0;

    protected:
    static char Prefix, Separator, Suffix;

	}; // end of Serializable class
} // end of Hax namespace
#endif
