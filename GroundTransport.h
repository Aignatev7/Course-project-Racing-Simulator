#pragma once
#include "Transport.h"
//#include "TransportType.h"

class GroundTransport : public Transport // класс Ќаземный транспорт
{
protected:
	int speed;                  // скорость
	std::string name_transport; // наименование транспорта
	double final_time = 0;		// итоговое врем€
	int driving_time_before_rest; // врем€ движени€ до отдыха
	int duration_of_rest;         // длительность отдыха

public:
	TransportType getType() override;
	GroundTransport();
	void set_final_time(double distance);
	double get_final_time();
};
