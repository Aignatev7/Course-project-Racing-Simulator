#pragma once
#include "Transport.h"
//#include "TransportType.h"

class AirTransport : public Transport // ����� ��������� ���������
{
protected:
	int speed;                  // ��������
	std::string name_transport; // ������������ ����������
	double final_time = 0;		// �������� �����
	double distance_reduction_coefficient; // ����������� ���������� ����������

public:
	TransportType getType() override;

	AirTransport();

	void set_final_time(double distance);
	double get_final_time();
};
