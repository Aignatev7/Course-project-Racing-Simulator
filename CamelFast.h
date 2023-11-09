#pragma once
#include "GroundTransport.h"

class CamelFast : public GroundTransport // класс Верблюд-быстроход
{
public:
	CamelFast();
	const char* getName() const;
	void set_final_time(double distance) override;
};
