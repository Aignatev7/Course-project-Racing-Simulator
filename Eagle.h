#pragma once
#include "AirTransport.h"

class Eagle : public AirTransport // ����� ���
{
public:
	Eagle();
	const char* getName() const;
	void set_final_time(double distance) override;
};

