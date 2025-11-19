#pragma once

# ifdef _WIN32
#  ifdef PROCEDURAL_EXPORTS
#    define PROCEDURAL_API __declspec(dllexport)
#  else
#    define PROCEDURAL_API __declspec(dllimport)
#  endif
# else
#  define PROCEDURAL_API
# endif