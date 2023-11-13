#pragma once
#include "Transport.h"

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
