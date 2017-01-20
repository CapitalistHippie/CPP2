#ifndef UTILS_DEFINITIONS_HEADER_INCLUDED
#define UTILS_DEFINITIONS_HEADER_INCLUDED

// Platform definitions.
#include "platformdefinitions.h"

// Debug based on the CMAKE NDEBUG flag.
#ifndef defined(NDEBUG)
#define UTILS_DEBUG
#endif // #if defined(NDEBUG)

#endif // #ifndef UTILS_DEFINITIONS_HEADER_INCLUDED
