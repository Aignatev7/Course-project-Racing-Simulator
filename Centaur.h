#pragma once
#include "GroundTransport.h"
#ifdef CENTAUR_EXPORTS
#define CENTAUR_API __declspec(dllexport)
#else
#define CENTAUR_API __declspec(dllimport)
#endif

class CENTAUR_API Centaur : public GroundTransport // класс Кентавр
{
public:
	Centaur();
	const char* getName() const;
	void set_final_time(double distance) override;
};
