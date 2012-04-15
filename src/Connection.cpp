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

#include "Connection.hpp"

namespace Hax {

Connection::Connection(boost::asio::io_service& io_service)
  : socket_(io_service),
    strand_(io_service),
    dispatcher_(io_service),
    request_(Event::MaxLength),
    response_(Event::MaxLength),
    closed_(false)
{
  std::cout << "A Connection has been created\n";
}

Connection::~Connection() {
  std::cout << "A Connection has been destroyed\n";
}

boost::asio::ip::tcp::socket& Connection::socket() {
  return socket_;
}
dispatcher& Connection::get_dispatcher() {
  return dispatcher_;
}

void Connection::start() {

  socket_.set_option(boost::asio::ip::tcp::no_delay(true));
  //socket_.set_option( boost::asio::socket_base::send_buffer_size( 8096 ) );
  //socket_.set_option( boost::asio::socket_base::receive_buffer_size( 8096 ) );
  boost::asio::socket_base::non_blocking_io command(true);
  socket_.io_control(command);
  read();
}

void Connection::stop() {
  if (closed_)
    return;

  boost::system::error_code ignored_ec;

  // initiate graceful Connection closure & stop all asynchronous ops
  socket_.shutdown(boost::asio::ip::tcp::socket::shutdown_both, ignored_ec);
  //socket_.close(ignored_ec);

  std::cout << "Connection: closed\n";
  closed_ = true;
}

void Connection::read() {
  strand_.post(boost::bind(&Connection::do_read, shared_from_this()));
}

  void Connection::do_read() {
    inbound.reset();
    request_.consume(request_.size());

    /*this->async_read( // s11n
     inbound,
     boost::bind(&Connection::handle_read, shared_from_this(), boost::asio::placeholders::error));*/

    async_read_until(
      socket_,
      request_,
      Event::Footer,
      boost::bind(
        &Connection::handle_read,
        shared_from_this(),
        boost::asio::placeholders::error,
        boost::asio::placeholders::bytes_transferred
      )
    );
  }

void Connection::handle_read(
  const boost::system::error_code& e,
  std::size_t bytes_transferred)
{
  if (!e) {
    while (request_.size() > 0 && inbound.fromStream(request_)) {
      //bool result = ;
      //if (result) {
        //request_.consume(bytes_transferred);

        handle_inbound();
    }
        // read next message
        read();
        //strand_.post( boost::bind(&Connection::read, shared_from_this()) );
      //} else {
      //  stop();
        //break;
      //}
    //}

  } else
    stop();
}

void Connection::send(const Event& evt) {
  strand_.post(boost::bind(&Connection::do_send, shared_from_this(), evt));
}

  void Connection::do_send(Event &evt) {
    //std::cout << "outbound buffer has " << response_.size() << "bytes (expected 0)";

    boost::system::error_code ec;

    //response_.consume(response_.size());

    outbound = Event(evt);
    outbound.toStream(response_);

    size_t n = boost::asio::write(socket_, response_.data(), boost::asio::transfer_all(), ec);
    //std::cout << "sent " << n << "bytes of data, buffer now has " << response_.size() << "\n";
    /*this->async_write(outbound,
     boost::bind(&Connection::handle_write, shared_from_this(),
     boost::asio::placeholders::error));*/

    if (!ec) {
      //std::cout << " - sent " << n << "bytes (out of" << response_.size() << "b)\n";
      response_.consume(n);
      //std::cout << " cleared response buf ( " << response_.size() << ")\n";
    } else
      stop();

  }

  void Connection::handle_inbound() {
    // message is ready for dispatching
    dispatcher_.deliver(inbound);
  }

} // namespace Hax
