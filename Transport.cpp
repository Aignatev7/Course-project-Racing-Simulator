#include "Transport.h"
#include "TransportType.h"

TransportType Transport::getType() { return TransportType::Ground; } //���� ���-��� ����������, ����� ������ //�������������� ��� � �����������

void Transport::set_final_time(double distance) {} //�������������� � �����������

double Transport::get_final_time() { //�������� �������� �����, ��������� �����
	return final_time;
}

//void Transport::set_final_time(double distance) {}
//TransportType Transport::get_type() { return TransportType::Ground; } //���� ���-��� ����������, ����� ������
//double Transport::get_final_time() {
//	return final_time;
//}