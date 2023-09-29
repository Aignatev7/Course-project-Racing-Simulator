#pragma once
#include "Transport.h"

class AirTransport : public Transport // ����� ��������� ���������
{
protected:
	double distance_reduction_coefficient; // ����������� ���������� ����������

public:
	TransportType getType() override;

	AirTransport();

	void set_final_time(double distance);
	double get_final_time();
};
