#include "Camel.h"
#include "GroundTransport.h"

Camel::Camel() {
	name_transport = "�������";
	speed = 10;
	driving_time_before_rest = 30;
	duration_of_rest = 5;
}

const char* Camel::getName() const {
	return "�������";
}

void Camel::set_final_time(double distance) {
	double time_to_move = distance / speed; // ����� ����������� �� ��������
	double n = time_to_move / driving_time_before_rest; // ���������� ��������� �� �����										
	double time_spent_on_rest = static_cast<int>(n) * duration_of_rest; // ����� ����������� �� �����
	if (distance > 0) final_time = time_to_move + time_spent_on_rest; // �������� ����� 
}

