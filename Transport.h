#pragma once
#include <iostream>
#include "TransportType.h"

#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllimport)
#endif

class TRANSPORTLIB_API Transport // класс Транспорт
{
public:
	virtual TransportType getType() = 0; //переопределяем тип в наследниках //тип, чтобы выбирать в какой гонке будет участвовать
	virtual const char* getName() const = 0;       //название транспорта, для отображения в таблице результатов
	virtual void set_final_time(double distance) = 0; //переопределяем в наследниках
	virtual double get_final_time() = 0; //получить итоговое время, публичный метод
};



