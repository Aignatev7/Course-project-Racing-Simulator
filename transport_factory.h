#pragma once
#include "Transport.h"
//#include "Camel.h"
//#include "CamelFast.h"
//#include "Centaur.h"
//#include "AllTerrainBoots.h"
//#include "MagicCarpet.h"
//#include "Eagle.h"
//#include "Broomstick.h"
#ifdef TRANSPORTFACTORY_EXPORTS
#define TRANSPORTFACTORY_API __declspec(dllexport)
#else
#define TRANSPORTFACTORY_API __declspec(dllimport)
#endif

TRANSPORTFACTORY_API Transport** makeTransports(size_t& total_transports);

struct RaceResults {
	std::string transport_name;
	double time;
};
