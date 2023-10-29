#pragma once
#include <iostream>
#include "TransportType.h"
#ifdef TRANSPORT_EXPORTS
#define TRANSPORT_API __declspec(dllexport)
#else
#define TRANSPORT_API __declspec(dllimport)
#endif

class TRANSPORT_API Transport // класс Транспорт
{
protected:
	int speed;                  // скорость
	std::string name_transport; // наименование транспорта
	double final_time = 0;		// итоговое время
public:
	virtual TransportType getType() = 0; //переопределяем тип в наследниках
	virtual const char* getName() const = 0;       //название транспорта, для отображения в таблице результатов
	virtual void set_final_time(double distance) = 0; //переопределяем в наследниках
	double get_final_time(); //получить итоговое время, публичный метод
};


//class Transport {
//public:
//	virtual const char* getName() const = 0;       //название транспорта, для отображения в таблице результатов
//	virtual TransportType getType() const = 0;     //тип, чтобы выбирать в какой гонке будет участвовать
//	virtual double calcTimeRide(int distance) const = 0; //расчёт времени по дистанции, математическая модель из ТЗ


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