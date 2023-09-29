#include "AllTerrainBoots.h"

AllTerrainBoots::AllTerrainBoots() {
	name_transport = "�������-���������";
	speed = 6;
	driving_time_before_rest = 60;
	duration_of_rest = 10;
}

const char* AllTerrainBoots::getName() const {
	return "�������-���������";
}

void AllTerrainBoots::set_final_time(double distance) {
	double time_to_move = distance / speed; // ����� ����������� �� ��������
	double n = time_to_move / driving_time_before_rest; // ���������� ��������� �� �����										
	double time_spent_on_rest = static_cast<int>(n) * duration_of_rest; // ����� ����������� �� �����
	if (distance > 0) final_time = time_to_move + time_spent_on_rest; // �������� ����� 
}