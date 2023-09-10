#pragma once
#include "Transport.h"

class GroundTransport : public Transport // ����� �������� ���������
{
protected:
	int driving_time_before_rest; // ����� �������� �� ������
	int duration_of_rest;         // ������������ ������

public:
	TransportType get_type();
	GroundTransport();

	void set_final_time(double distance);

	double get_final_time();
};
