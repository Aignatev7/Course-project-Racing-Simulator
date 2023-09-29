#include "Transport.h"
#include "TransportType.h"

TransportType Transport::getType() { return TransportType::Ground; } //надо что-тто возвращать, иначе ошибка //переопределяем тип в наследниках

void Transport::set_final_time(double distance) {} //переопределяем в наследниках

double Transport::get_final_time() { //получить итоговое время, публичный метод
	return final_time;
}

//void Transport::set_final_time(double distance) {}
//TransportType Transport::get_type() { return TransportType::Ground; } //надо что-тто возвращать, иначе ошибка
//double Transport::get_final_time() {
//	return final_time;
//}