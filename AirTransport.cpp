#include "AirTransport.h"


AirTransport::AirTransport() {
	name_transport = "��������� ���������";
}

void AirTransport::set_final_time(double distance) {

	if (distance > 0)
		final_time = (distance * (1 - (distance_reduction_coefficient / 100)) / speed); // �������� �����  
}
double AirTransport::get_final_time() { return final_time; }