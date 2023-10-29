#include <iostream>
#include "Transport.h"
#include "GroundTransport.h"
#include "Camel.h"
#include "CamelFast.h"
#include "Centaur.h"
#include "AllTerrainBoots.h"
#include "AirTransport.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broomstick.h"
#include "TransportType.h"
#include "transport_factory.h"

int main() {
	setlocale(LC_ALL, "Rus");

	int type_of_race;        // ��� �����
	double distance = 0;     // ����������
	int registration = 0;		  // �����������
	int transport_selection = 0;  // ����� ����������

	std::cout << "����� ���������� �� �������� ���������!" << std::endl;
	std::cout << "1. ����� ��� ��������� ����������" << std::endl;
	std::cout << "2. ����� ��� ���������� ����������" << std::endl;
	std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
	std::cout << "�������� ��� �����: ";
	std::cin >> type_of_race;
	std::cout << "������� ����� ��������� (������ ���� ������������): ";
	std::cin >> distance;
	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������" << std::endl;
	std::cout << "1. ���������������� ���������" << std::endl;
	std::cout << "�������� ��������: ";
	std::cin >> registration;
	int transport_selection_1 = 0;    // ������������������ ��������� 1
	int transport_selection_2 = 0;    // ������������������ ��������� 2

	//�������� ������� ��� �������� ������ ��������
	size_t total_transports = 0;
	Transport** transports_all = makeTransports(total_transports);

	//������ � ������������, ������� ������� ������������ �� �����
	size_t selected_transports = 2;
	Transport** transports_race = new Transport * [selected_transports];
	//����� ������ ���� ������ ������ �� ������ � �������� ����, �� � ���� ������ �� ������ ��������� ����
	transports_race[0] = transports_all[0];
	transports_race[1] = transports_all[1];
	  
	//������ � ������������
	RaceResults* results = new RaceResults[selected_transports];
	//��������� ������
	for (int i = 0; i < selected_transports; i++)
	{
		results[i].transport_name = std::string(transports_race[i]->getName());
		//results[i].time = transports_race[i]->calcTimeRide(100);
	}

	Camel camel;
	camel.set_final_time(distance);

	CamelFast camelFast;
	camelFast.set_final_time(distance);

	Centaur centaur;
	centaur.set_final_time(distance);

	AllTerrainBoots allTerrainBoots;
	allTerrainBoots.set_final_time(distance);

	MagicCarpet magicCarpet;
	magicCarpet.set_final_time(distance);

	Eagle eagle;
	eagle.set_final_time(distance);

	Broomstick broomstick;
	broomstick.set_final_time(distance);

	do {
		if (registration == 1) {
			switch (type_of_race) {
			case 1:
				std::cout << "����� ��� ��������� ����������. ";
				//type_of_race = 1;
				break;
			case 2:
				std::cout << "����� ��� ���������� ����������. ";
				//type_of_race = 2;
				break;
			case 3:
				std::cout << "����� ��� ��������� � ���������� ����������. ";
				type_of_race = 3;
				break;
			}
		}
		else {
			return 1;
		}

		std::cout << "\ntype_of_race: " << type_of_race << std::endl;

		std::cout << "����������: " << distance << std::endl;
		std::cout << "������������������ ������������ ��������: " << transport_selection << std::endl;
		std::cout << "1. �������" << std::endl;
		std::cout << "2. �������-���������" << std::endl;
		std::cout << "3. �������" << std::endl;
		std::cout << "4. �������-���������" << std::endl;
		std::cout << "5. ����-������" << std::endl; 
		std::cout << "6. ���" << std::endl;
		std::cout << "7. �����" << std::endl;
		std::cout << "0. ��������� �����������" << std::endl;

		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> transport_selection;

		switch (transport_selection) {
		case 1:
			std::cout << "�������";
			transport_selection = 1;
			break;
		case 2:
			std::cout << "�������-���������";
			transport_selection = 2;
			break;
		case 3:
			std::cout << "�������";
			transport_selection = 3;
			break;
		case 4:
			std::cout << "�������-���������";
			transport_selection = 4;
			break;
		case 5:
			std::cout << "����-������";
			transport_selection = 5;
			break;
		case 6:
			std::cout << "���";
			transport_selection = 6;
			break;
		case 7:
			std::cout << "�����";
			transport_selection = 7;
			break;
		}
		if (transport_selection != 0) {
			std::cout << " ������� ���������������!" << std::endl;
		}

		if ((transport_selection != 0) && (transport_selection != transport_selection_2)) {
			transport_selection_1 = transport_selection;
		}

		if ((transport_selection != 0) && (transport_selection != transport_selection_1)) {
			transport_selection_2 = transport_selection;
		}

	} while (transport_selection != 0);

	std::cout << "���������� �����: " << std::endl;

	//��� ������ ���� ���������� �����������

	//���������� ����������
	for (int i = 0; i < total_transports; i++)
	{
		std::cout << "Name:" << results[i].transport_name << std::endl;
		std::cout << "Time for 100:" << results[i].time << std::endl;
	}
	//����������� ������
	for (int i = 0; i < total_transports; i++)
	{
		delete transports_all[i];
	}
	delete[] transports_all;
	//�� �� ������� transports_race, ��� ��� ����� ������� �������� ������
	//��� ������� ��� ������ ����
	delete[] results;

	return 0;
}



	/*if (transport_selection_1 == 1) {
		std::cout << "�������. �����: " << camel.get_final_time() << std::endl;
	}

	if (transport_selection_1 == 2) {
		std::cout << "�������-���������. �����: " << camelFast.get_final_time() << std::endl;
	}

	if (transport_selection_1 == 3) {
		std::cout << "�������. �����: " << centaur.get_final_time() << std::endl;
	}

	if (transport_selection_1 == 4) {
		std::cout << "�������-���������. �����: " << allTerrainBoots.get_final_time() << std::endl;
	}

	if (transport_selection_1 == 5) {
		std::cout << "����-������. �����: " << magicCarpet.get_final_time() << std::endl;
	}

	if (transport_selection_1 == 6) {
		std::cout << "���. �����: " << eagle.get_final_time() << std::endl;
	}

	if (transport_selection_1 == 7) {
		std::cout << "�����. �����: " << broomstick.get_final_time() << std::endl;
	}*/

	/*std::cout << transport_selection_1 << std::endl;
	std::cout << transport_selection_2 << std::endl;*/




/*
�������� ������ ���������� �����

�������� ������ � ���������� ���������� ���������� ����� ��� �����������
������������ ������� (��). ����������
1. ������� ����

��� �� ������� �� ��� ����:

	��������;
	���������.

� ���������� ���� ��������� ����� ��:

	������� (��������);
	�������-��������� (��������);
	������� (��������);
	�������-��������� (��������);
	����-������ (���������);
	��� (���������);
	����� (���������).

� ���� �� ���� ������� �������� ��������.

� ���������� ���� ��������� ����� �����:

	������ ��� �������� ��;
	������ ��� ��������� ��;
	��� �������� � ��������� ��.

�������� ��

�������� �� �� ����� ��������� ����������: ����� ������������ ������� �� �����
��������. � ������� ���� ��������� �� ����� �������� ���. ����� ������ �
������� ��������� �� ����� ����������� � ������� �� ����, ����� �� ����� ���
���������. ������

�������� �� ����� 100 ��/�, ��������� ����� 1000 ��, ����� �������� �� ������
����� 6 �, ������������ ������ ����� 3 �. � ����� ������ �� ������ ��������� ��
1000 / 100 = 10 �. ��� ��� ����� �������� �� ������ ����� 6 �����, �� �� ���� ��
����� ����� ��������� 1 ���. �������� ����� ��������: 10 + 3 = 13 �.

������� ������� ������������� ��� ������� ��������� ��:
��� �� 	�������� 	����� ��������
�� ������ 	������������ ������
������� 	10 	30 	������ ���: 5
��� ����������� ����: 8
�������-��������� 	40 	10 	������ ���: 5
������ ���: 6.5
��� ����������� ����: 8
������� 	15 	8 	������ 2
�������-��������� 	6 	60 	������ ���: 10
��� ����������� ����: 5
��������� ��

��������� �� ��������� ����������. ��� ��� ��� ����� �������� �����������,
������ ��������� �� ����� ����������� ����������� ���������� ����������: �� ����
��� ������� ���������� �� ���������, ������� ����� ������, �����������.
����������� ���������� ���������� ����� �������� �� ���������. ������

���� � ���������� �� ����������� ���������� ���������� ����� 5%, �� ������
��������� � 1000 �� ��� ����� ������ ��������� � 1000 * 0.95 = 950 ��.

������� ������� ������������� ��� ������� ���������� ��:
��� �� 	�������� 	����������� ���������� ����������
����-������ 	10 	���� ���������� ������ 1000 � ��� ����������
���� ���������� ������ 5000 � 3%
���� ���������� ������ 10000 � 10%
���� ���������� ������ ��� ����� 10000 � 5%
��� 	8 	������ 6%
����� 	20 	������������� �� 1% �� ������ 1000 �.�. ����������
��������, ��� ���������� 5600 ����������� ����� 5%
2. ���������� � �������

���������� �� ���������������� ���������:

	��� ������ ��������� ������������ ������ ���� ��������� ����� ���� �����.
	����� ������ ���� ����� ������������ ������ ������� ���������� ��� ����
�����. ������������ ������ ���� ������������� ����������� ���������������� �� ��
�����. ����� �������������� �� ����� ������ ���������� ��� ������� ���� ��. ��
����� ������ ���� ���������������� ���� �� ��� ���� ��. ������ ����������������
�� �������� ����� ��������� ��, � �� ��������� ����� �������� ��. �����
���������� ����������� ������������ ����� ���� ���������������� ��� ��, ����
������ �����. ���� ����� ���������� ���������. ������������ ��������� ���������
����� � ��-��������� ����� � �� �����. ���������� ���������� ������ ����������
�� ����������� �������: ����� ������� ����������� ������ ������, ����� ���������
� �����. ������ � ������������ ����� ������������ ������ ���� ��������� �����:
�������� ��� ���� ����� (��������� �������� ������) ��� ����� �� ���������.

���������� � ��������� � ���������� ���������:

	��� ���������� �� � ����� ������ ���� ������������ �������� �������.
	��� ������� ������ ������ ���� ������� ���� ������������� ���� + ����
��������� ����. ������ ��, ����� � ������ ��������������� ������ ������
���������� � ��������� ������������ ���������� (DLL). � �������� ������� (.exe)
������ ���������� ��� ��� �������������� � ������������� � ������������� �������
�� ����� ���������� � ����� �� �������� ������������. ������ ���������� ��
������ �������������� �������� ������ �� �������.

3. ������ ��������� ������ ���������

����� ���� ����� ��������

���� ����������

����� �������� 1 �����������

����������� 1 �������

����������� 1 �������

����������� 1 �����

����� �������� 2 �����������

����������� 2 �������

����������� 2 �����

����������� 2 �������-���������

����������� 2 �����

����� �������� �����

���������� � ����� �������� ��� ���

����� ���� ����� ���������

���� ����������

����� �������� 1 �����������

����������� 1 �������-���������

����������� 1 �����

����� �������� 2 �����������

����������� 2 �����

����������� 2 ���

����������� 2 ����-������

����������� 2 �����

����� �������� �����

���������� � ����� �������� �����
*/