#pragma once
#include "GroundTransport.h"

class AllTerrainBoots : public GroundTransport // ����� �������-���������
{
public:
	AllTerrainBoots();
	const char* getName() const;

	void set_final_time(double distance);

	double get_final_time();
};
