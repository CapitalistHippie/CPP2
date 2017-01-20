#include "main.h"

int main()
{
  // Enable memory leak detection if we're in a debug build.
  #ifdef UTILS_DEBUG
  utils::EnableMemoryLeakDetection();
  #endif // #ifdef UTILS_DEBUG

  netw::telnet::Server telnetServer;
}
