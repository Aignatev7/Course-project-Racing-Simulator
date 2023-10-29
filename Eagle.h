#pragma once
#include "AirTransport.h"
#ifdef EAGLE_EXPORTS
#define EAGLE_API __declspec(dllexport)
#else
#define EAGLE_API __declspec(dllimport)
#endif

class EAGLE_API Eagle : public AirTransport // класс ќрЄл
{
public:
	Eagle();
	const char* getName() const;
	void set_final_time(double distance) override;
};

