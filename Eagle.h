#pragma once
#include "AirTransport.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

//#ifdef EAGLE_EXPORTS
//#define EAGLE_API __declspec(dllexport)
//#else
//#define EAGLE_API __declspec(dllimport)
//#endif

class  Eagle : public AirTransport // класс ќрЄл
{
public:
	Eagle();
	const char* getName() const;
	void set_final_time(double distance) override;
};

