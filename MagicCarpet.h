#pragma once
#include "AirTransport.h"
#ifdef MAGICCARPET_EXPORTS
#define MAGICCARPET_API __declspec(dllexport)
#else
#define MAGICCARPET_API __declspec(dllimport)
#endif

class MAGICCARPET_API MagicCarpet : public AirTransport // ����� �����-������
{
public:
	MagicCarpet();
	const char* getName() const;
	void set_final_time(double distance) override;
}; 
