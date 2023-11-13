#pragma once

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

enum class TRANSPORTLIB_API TransportType {
	Ground,
	Air
};
 