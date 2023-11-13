#pragma once
#include <iostream>
#include "GroundTransport.h"
#include "TransportType.h"

class AllTerrainBoots : public GroundTransport // класс Ботинки-вездеходы
{
public:
	AllTerrainBoots();
	const char* getName() const;
	void set_final_time(double distance);
};
