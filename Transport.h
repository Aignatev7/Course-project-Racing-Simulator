#pragma once
#include <iostream>
#include "TransportType.h"
#ifdef TRANSPORT_EXPORTS
#define TRANSPORT_API __declspec(dllexport)
#else
#define TRANSPORT_API __declspec(dllimport)
#endif

class TRANSPORT_API Transport // ����� ���������
{
protected:
	int speed;                  // ��������
	std::string name_transport; // ������������ ����������
	double final_time = 0;		// �������� �����
public:
	virtual TransportType getType() = 0; //�������������� ��� � �����������
	virtual const char* getName() const = 0;       //�������� ����������, ��� ����������� � ������� �����������
	virtual void set_final_time(double distance) = 0; //�������������� � �����������
	double get_final_time(); //�������� �������� �����, ��������� �����
};


//class Transport {
//public:
//	virtual const char* getName() const = 0;       //�������� ����������, ��� ����������� � ������� �����������
//	virtual TransportType getType() const = 0;     //���, ����� �������� � ����� ����� ����� �����������
//	virtual double calcTimeRide(int distance) const = 0; //������ ������� �� ���������, �������������� ������ �� ��


/*
class Transport // ����� ���������
{
protected:
	int speed;                  // ��������
	std::string name_transport; // ������������ ����������
	double final_time = 0;		// �������� �����
public:
	virtual void set_final_time(double distance) = 0; //�������������� � �����������
	virtual TransportType get_type() = 0; //�������������� ��� � �����������
	double get_final_time() { //�������� �������� �����, ��������� �����
		return final_time;
	}
};
*/