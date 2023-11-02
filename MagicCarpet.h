#pragma once
#include "AirTransport.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

//#ifdef MAGICCARPET_EXPORTS
//#define MAGICCARPET_API __declspec(dllexport)
//#else
//#define MAGICCARPET_API __declspec(dllimport)
//#endif

class TRANSPORTLIB_API MagicCarpet : public AirTransport // класс Ковер-самолёт
{
public:
	MagicCarpet();
	const char* getName() const;
	void set_final_time(double distance) override;
}; 
