#ifndef NETW_TELNET_SERVER_HEADER_INCLUDED
#define NETW_TELNET_SERVER_HEADER_INCLUDED

#include <Socket.h>

#include <utils/noncopyable.h>

namespace netw
{
namespace telnet
{
	class Server :
		utils::Noncopyable
	{
	private:
		ServerSocket socket;

	public:
		Server(const int port);

		void Accept();
	}; // class Server
} // namespace telnet
} // namespace netw

#endif // #ifndef NETW_TELNET_SERVER_HEADER_INCLUDED
