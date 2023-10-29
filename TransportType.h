#pragma once
#ifdef TRANSPORTTYPE_EXPORTS
#define TRANSPORTTYPE_API __declspec(dllexport)
#else
#define TRANSPORTTYPE_API __declspec(dllimport)
#endif

enum class TRANSPORTTYPE_API TransportType {
	Ground,
	Air
};
 