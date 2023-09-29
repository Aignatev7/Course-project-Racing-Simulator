#include "Broomstick.h"


Broomstick::Broomstick() {
	name_transport = "Метла";
	speed = 20;
	distance_reduction_coefficient = 1;
}

const char* Broomstick::getName() const {
	return "Метла";
}

void Broomstick::set_final_time(double distance) {

	if (distance > 0)
		final_time = (distance * (1 - (distance_reduction_coefficient / 100)) / speed); // итоговое время  
}