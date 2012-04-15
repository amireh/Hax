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

#include "Hax/Identifiable.hpp"
#include "Hax/Utility.hpp"

namespace Hax {
  using Utility::stringify;
  
	Identifiable::~Identifiable()
	{
    mUID = -1;
    mName = "Unnamed";
	}

  Identifiable::Identifiable()
  : mUID(-1),
    mName("Unnamed")
  {
	}

  Identifiable::Identifiable(const Identifiable& src)// : Caster(this)
  {
    copyFrom(src);
  }

  Identifiable& Identifiable::operator=(const Identifiable& rhs)
  {
    if (this != &rhs) // check for self-assignment
      copyFrom(rhs);

    return (*this);
  }

  void Identifiable::copyFrom(const Identifiable& src)
  {
    mUID = src.mUID;
    mName = src.mName;
  }

	void Identifiable::_setUID(const int inUID)
	{
    if (mUID != -1)
    {
      std::string _msg = "Attempting to re-assign an object's UID after it's been set! Object: " + mName + "#" + stringify(mUID);
      throw integrity_violation(_msg);
    }

		mUID = inUID;
	}


	void Identifiable::_setName(std::string const& inName)
	{
    if (mName != "Unnamed")
    {
      std::string _msg = "Attempting to re-assign an object's UID after it's been set! Object: " + mName + "#" + stringify(mUID);
      throw integrity_violation(_msg);
    }

		mName = inName;
	}

	int Identifiable::getUID() const {
    return mUID;
  }
	std::string const& Identifiable::getName() const {
    return mName;
  }

  bool Identifiable::operator==(const Identifiable& rhs)
  {
    return rhs.mUID == this->mUID;
  }

  void Identifiable::serialize(Event& inEvt) {
    inEvt.setProperty("UID", this->mUID);
  }
  void Identifiable::deserialize(const Event& inEvt) {
    this->mUID = Utility::convertTo<int>(inEvt.getProperty("UID"));
  }
}
