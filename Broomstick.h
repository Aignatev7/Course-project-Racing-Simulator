#pragma once
#include "AirTransport.h"

class Broomstick : public AirTransport // класс Метла
{
public:
	Broomstick();
	const char* getName() const;
	void set_final_time(double distance) override;
};
