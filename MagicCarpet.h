#pragma once
#include "AirTransport.h"

class MagicCarpet : public AirTransport // ����� �����-������
{
public:
	MagicCarpet();
	const char* getName() const;
	void set_final_time(double distance) override;
}; 
