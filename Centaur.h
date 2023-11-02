#pragma once
#include "GroundTransport.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

//#ifdef CENTAUR_EXPORTS
//#define CENTAUR_API __declspec(dllexport)
//#else
//#define CENTAUR_API __declspec(dllimport)
//#endif

class TRANSPORTLIB_API Centaur : public GroundTransport // класс Кентавр
{
public:
	Centaur();
	const char* getName() const;
	void set_final_time(double distance) override;
};
