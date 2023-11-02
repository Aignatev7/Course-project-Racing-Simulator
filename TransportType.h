#pragma once

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

//#ifdef TRANSPORTTYPE_EXPORTS
//#define TRANSPORTTYPE_API __declspec(dllexport)
//#else
//#define TRANSPORTTYPE_API __declspec(dllimport)
//#endif

enum class TRANSPORTLIB_API TransportType {
	Ground,
	Air
};
 