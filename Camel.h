#pragma once
#include "GroundTransport.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

//#ifdef CAMEL_EXPORTS
//#define CAMEL_API __declspec(dllexport)
//#else
//#define CAMEL_API __declspec(dllimport)
//#endif

class TRANSPORTLIB_API Camel : public GroundTransport // класс Верблюд
{
public:
	Camel();
	const char* getName() const;
	void set_final_time(double distance) override;
};


