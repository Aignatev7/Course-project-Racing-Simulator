#pragma once
#include <iostream>
#include "TransportType.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

class TRANSPORTLIB_API Transport // ����� ���������
{
public:
	virtual TransportType getType() = 0; //�������������� ��� � ����������� //���, ����� �������� � ����� ����� ����� �����������
	virtual const char* getName() const = 0;       //�������� ����������, ��� ����������� � ������� �����������
	virtual void set_final_time(double distance) = 0; //�������������� � �����������
	virtual double get_final_time() = 0; //�������� �������� �����, ��������� �����
};



