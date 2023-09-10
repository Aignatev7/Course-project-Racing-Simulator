#include "Transport.h"

void set_final_time(double distance); //переопределяем в наследниках
TransportType get_type(); //переопределяем тип в наследниках
double Transport::get_final_time() { //получить итоговое время, публичный метод
	return final_time;
}