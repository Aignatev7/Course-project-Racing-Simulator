#pragma once
#include <iostream>
#include "GroundTransport.h"
#include "TransportType.h"


#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

//#ifdef ALLTERRAINBOOTS_EXPORTS
//#define ALLTERRAINBOOTS_API __declspec(dllexport)
//#else
//#define ALLTERRAINBOOTS_API __declspec(dllimport)
//#endif


class TRANSPORTLIB_API AllTerrainBoots : public GroundTransport // класс Ботинки-вездеходы
{
public:
	AllTerrainBoots();
	const char* getName() const;

	void set_final_time(double distance);

	double get_final_time();
};
