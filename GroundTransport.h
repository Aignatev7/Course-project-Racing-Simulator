#pragma once
#include "Transport.h"
//#include "TransportType.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

//#ifdef GROUNDTRANSPORT_EXPORTS
//#define GROUNDTRANSPORT_API __declspec(dllexport)
//#else
//#define GROUNDTRANSPORT_API __declspec(dllimport)
//#endif

class TRANSPORTLIB_API GroundTransport : public Transport // класс Наземный транспорт
{
protected:
	int driving_time_before_rest; // время движения до отдыха
	int duration_of_rest;         // длительность отдыха

public:
	TransportType getType() override;
	GroundTransport();
	void set_final_time(double distance);
	double get_final_time();
};

//class GroundTransport : public Transport {
//public:
//	TransportType getType() const override {
//		return TransportType::Ground;
//	}