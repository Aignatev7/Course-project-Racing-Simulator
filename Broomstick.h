#pragma once
#include "AirTransport.h"

class Broomstick : public AirTransport // ����� �����
{
public:
	Broomstick();
	const char* getName() const;
	void set_final_time(double distance) override;
};
