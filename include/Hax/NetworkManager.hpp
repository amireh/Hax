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

#ifndef H_HAX_NETWORK_MANAGER_H
#define H_HAX_NETWORK_MANAGER_H

#include <iostream>
#include <boost/thread.hpp>

#include "Hax/Hax.hpp"
#include "Hax/Connection.hpp"

namespace Hax {

	struct Event;

	/*! \class NetworkManager
	 *	\brief
	 *	Handles connections and sockets and streaming of game data over the network.
	 *	This class also intercepts all events meant to be sent to the server and
	 *	does the actual sending
	 */
	class NetworkManager {

	public:
		static NetworkManager* getSingletonPtr();
    static NetworkManager& getSingleton();
		virtual ~NetworkManager();

		/*! \brief
		 *	initiates connection to the master server, result of the attempt
		 *	is handled by connAccepted() and connFailed()
		 */
		bool connect();

		/*! \brief
		 *	dispatches a "Logout" event to all the local modules so they can
		 *	wrap up their work, then severes the connection with the MS
		 */
		bool disconnect();

    void send(const Event&);

    bool isConnected() const;

	protected:
    void doConnect();

		/*! \brief
		 *	uses dispatchEvent() method to broadcast an incoming event
		 */
		void onInbound(const Event&);

    void onSyncGameData(const Event&);

		log4cpp::Category	*mLog;

		bool fOnline;

	private:
		static NetworkManager* mInstance;
		NetworkManager();

    Connection_ptr conn_;
    std::string mHost;

    boost::asio::io_service& io_service_;
    boost::asio::io_service::work work_;
    boost::asio::deadline_timer timer_;
    boost::thread* poller_;

	};
}

#endif
