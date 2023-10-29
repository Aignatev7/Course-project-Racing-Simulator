#pragma once
#include "AirTransport.h"
#ifdef BROOMSTICK_EXPORTS
#define BROOMSTICK_API __declspec(dllexport)
#else
#define BROOMSTICK_API __declspec(dllimport)
#endif

class BROOMSTICK_API Broomstick : public AirTransport // класс Метла
{
public:
	Broomstick();
	const char* getName() const;
	void set_final_time(double distance) override;
};
