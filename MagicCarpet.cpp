#include "MagicCarpet.h"

MagicCarpet::MagicCarpet() {
	name_transport = "Ковер-самолёт";
	speed = 10;
	distance_reduction_coefficient = 3;
}

const char* MagicCarpet::getName() const {
	return "Ковер-самолёт";
}

void MagicCarpet::set_final_time(double distance) {

	if (distance > 0)
		final_time = (distance * (1 - (distance_reduction_coefficient / 100)) / speed); // итоговое время  
}