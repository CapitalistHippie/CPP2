#ifndef NETW_TELNET_CLIENT_HEADER_INCLUDED
#define NETW_TELNET_CLIENT_HEADER_INCLUDED

#include <functional>
#include <string>

#include <Socket.h>

#include <utils/noncopyable.h>

namespace netw
{
namespace telnet
{
	class Client :
		utils::Noncopyable
	{
	private:
		ClientSocket socket;

	public:
		Client(const std::string& host, const int port);
	}; // class Client
} // namespace telnet
} // namespace netw

#endif // #ifndef NETW_TELNET_CLIENT_HEADER_INCLUDED
