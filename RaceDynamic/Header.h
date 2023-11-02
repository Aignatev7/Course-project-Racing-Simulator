#pragma once
//#include "Transport.h"
//#include "Eagle.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

TRANSPORTLIB_API Transport** makeTransports(size_t& total_transports);

class TRANSPORTLIB_API CamelFast : public GroundTransport;

class TRANSPORTLIB_API Eagle : public AirTransport; // класс ќрЄл