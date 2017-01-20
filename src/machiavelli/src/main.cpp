#include "main.h"

int main()
{
  // Memory leak detection.
  #ifdef UTILS_DEBUG
  utils::EnableMemoryLeakDetection();
  #endif // #ifdef UTILS_DEBUG

  int* i = new int(272);
}
