#pragma once
#include "Transport.h"
//#include "TransportType.h"

class AirTransport : public Transport // класс Воздушный транспорт
{
protected:
	int speed;                  // скорость
	std::string name_transport; // наименование транспорта
	double final_time = 0;		// итоговое время
	double distance_reduction_coefficient; // коэффициент сокращения расстояния

public:
	TransportType getType() override;

	AirTransport();

	void set_final_time(double distance);
	double get_final_time();
};
