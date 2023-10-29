#pragma once
#include <iostream>
#include "GroundTransport.h"
#include "TransportType.h"
#ifdef ALLTERRAINBOOTS_EXPORTS
#define ALLTERRAINBOOTS_API __declspec(dllexport)
#else
#define ALLTERRAINBOOTS_API __declspec(dllimport)
#endif


class ALLTERRAINBOOTS_API AllTerrainBoots : public GroundTransport // класс Ботинки-вездеходы
{
public:
	AllTerrainBoots();
	const char* getName() const;

	void set_final_time(double distance);

	double get_final_time();
};
