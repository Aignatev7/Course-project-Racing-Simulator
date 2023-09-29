#pragma once
#include "GroundTransport.h"

class Centaur : public GroundTransport // класс Кентавр
{
public:
	Centaur();
	const char* getName() const;
	void set_final_time(double distance) override;
};
