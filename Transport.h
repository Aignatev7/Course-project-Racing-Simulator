#pragma once

#pragma once
#include <iostream>
#include "TransportType.h"

class Transport // класс Транспорт
{
protected:
	int speed;                  // скорость
	std::string name_transport; // наименование транспорта
	double final_time = 0;		// итоговое время
public:
	//virtual void set_final_time(double distance); //переопределяем в наследниках
	//virtual TransportType get_type(); //переопределяем тип в наследниках
	double get_final_time(); //получить итоговое время, публичный метод
};


/*
class Transport // класс Транспорт
{
protected:
	int speed;                  // скорость
	std::string name_transport; // наименование транспорта
	double final_time = 0;		// итоговое время
public:
	virtual void set_final_time(double distance) = 0; //переопределяем в наследниках
	virtual TransportType get_type() = 0; //переопределяем тип в наследниках
	double get_final_time() { //получить итоговое время, публичный метод
		return final_time;
	}
};
*/