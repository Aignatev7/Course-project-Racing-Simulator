#pragma once
#include "GroundTransport.h"

class Camel : public GroundTransport // класс Верблюд
{
public:
	Camel();
	const char* getName() const;
	void set_final_time(double distance) override;
};


