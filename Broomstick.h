#pragma once
#include "AirTransport.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

//#ifdef BROOMSTICK_EXPORTS
//#define BROOMSTICK_API __declspec(dllexport)
//#else
//#define BROOMSTICK_API __declspec(dllimport)
//#endif

class TRANSPORTLIB_API Broomstick : public AirTransport // класс Метла
{
public:
	Broomstick();
	const char* getName() const;
	void set_final_time(double distance) override;
};
