#include "Eagle.h"

Eagle::Eagle() {
	name_transport = "���";
	speed = 8;
	distance_reduction_coefficient = 6;
}

const char* Eagle::getName() const {
	return "���";
}

void Eagle::set_final_time(double distance) {

	if (distance > 0)
		final_time = (distance * (1 - (distance_reduction_coefficient / 100)) / speed); // �������� �����  
}