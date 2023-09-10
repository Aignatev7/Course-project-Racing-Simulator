#pragma once
#include "Transport.h"

class GroundTransport : public Transport // класс Наземный транспорт
{
protected:
	int driving_time_before_rest; // время движения до отдыха
	int duration_of_rest;         // длительность отдыха

public:
	TransportType get_type();
	GroundTransport();

	void set_final_time(double distance);

	double get_final_time();
};
