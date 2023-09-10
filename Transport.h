#pragma once

#pragma once
#include <iostream>
#include "TransportType.h"

class Transport // ����� ���������
{
protected:
	int speed;                  // ��������
	std::string name_transport; // ������������ ����������
	double final_time = 0;		// �������� �����
public:
	//virtual void set_final_time(double distance); //�������������� � �����������
	//virtual TransportType get_type(); //�������������� ��� � �����������
	double get_final_time(); //�������� �������� �����, ��������� �����
};


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