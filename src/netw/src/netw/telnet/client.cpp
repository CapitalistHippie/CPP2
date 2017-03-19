#include "netw/telnet/client.h"

using namespace netw::telnet;

Client::Client(const std::string& host, const int port) :
    socket(host, port)
{
}
