#pragma once
#include "Transport.h"

class AirTransport : public Transport // класс Воздушный транспорт
{
protected:
	double distance_reduction_coefficient; // коэффициент сокращения расстояния

public:
	AirTransport();

	void set_final_time(double distance);
	double get_final_time();
};
