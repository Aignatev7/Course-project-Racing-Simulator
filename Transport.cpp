#include "Transport.h"

void set_final_time(double distance); //�������������� � �����������
TransportType get_type(); //�������������� ��� � �����������
double Transport::get_final_time() { //�������� �������� �����, ��������� �����
	return final_time;
}