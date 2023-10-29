#pragma once
#include "GroundTransport.h"
#ifdef CAMELFAST_EXPORTS
#define CAMELFAST_API __declspec(dllexport)
#else
#define CAMELFAST_API __declspec(dllimport)
#endif

class CAMELFAST_API CamelFast : public GroundTransport // ����� �������-���������
{
public:
	CamelFast();
	const char* getName() const;
	void set_final_time(double distance) override;
};
