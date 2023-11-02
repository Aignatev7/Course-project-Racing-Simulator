#pragma once
#include "Transport.h"
//#include "TransportType.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

//#ifdef AIRTRANSPORT_EXPORTS
//#define AIRTRANSPORT_API __declspec(dllexport)
//#else
//#define AIRTRANSPORT_API __declspec(dllimport)
//#endif

class TRANSPORTLIB_API AirTransport : public Transport // класс Воздушный транспорт
{
protected:
	double distance_reduction_coefficient; // коэффициент сокращения расстояния

public:
	TransportType getType() override;

	AirTransport();

	void set_final_time(double distance);
	double get_final_time();
};
