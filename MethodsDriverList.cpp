#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "ClassDriverList.h"
#include "GlobalMethods.h"

using namespace std;

//������ ������ DriverList
DriverList::~DriverList() // ����������
{
	while (!setPtrsDrivers.empty()) // �������� ���� ���������,
	{ // �������� ���������� �� ����������
		iter = setPtrsDrivers.begin();
		delete *iter;
		setPtrsDrivers.erase(iter);
	}
}
//---------------------------------------------------------

void DriverList::insertDriver(Driver* ptrD)
{
	setPtrsDrivers.push_back(ptrD); // ������� ������ �������� � ������
}
//--------------------------------------------------------

void DriverList::Editing()
{
	color(0);
	cout << "������� ID ��������, ������ �������� �� ������ ��������: " << endl;
	cin >> IDforEdit;
	iter = setPtrsDrivers.begin(); // �� ������ ������
	while (iter != setPtrsDrivers.end()) // �� ����� ������
	{ // ����� �������� � ������ (���������� ��������� ID � ID � ������)
		sID = (*iter)->GetID();
		if (IDforEdit == sID) // ���������� ��������� id �� ����� id � ������
		{
			cout << "������� ����� �������: ";
			cin >> EditFam;
			(*iter)->Fam = EditFam;
			cout << "������� ����� ���: ";
			cin >> EditName;
			(*iter)->Name = EditName;
			cout << "������� ����� ��������: ";
			cin >> EditOtch;
			(*iter)->Otch = EditOtch;
			cout << "������� ����� �����: ";
			cin >> EditCity;
			(*iter)->City = EditCity;
			cout << "������� ����� �����: ";
			cin >> EditStreet;
			(*iter)->Street = EditStreet;
			cout << "������� ����� ����� ����: ";
			do
			{
				cin >> EditNumberHome;
				CheckInt(EditNumberHome);
			} while (EditNumberHome < 0);
			(*iter)->NumberHome = EditNumberHome;
			cout << "������� ����� ����� ��������: ";
			do
			{
				cin >> EditNumberFlat;
				CheckInt(EditNumberFlat);
			} while (EditNumberFlat < 0);
			(*iter)->NumberFlat = EditNumberFlat;
			cout << "������� ����� ����� ��������: ";
			do
			{
				cin >> EditPhone;
				CheckLong(EditPhone);
			} while (EditPhone < 0);
			(*iter)->Phone = EditPhone;
			cout << "������� ����� ����� ���������: ";
			do
			{
				cin >> EditNarushen;
				CheckLong(EditNarushen);
			} while (EditNarushen < 0);
			(*iter)->Narushen = EditNarushen;
			cout << "������� ����� ����� ����������:";
			do
			{
				cin >> EditNumberCar;
				CheckLong(EditNumberCar);
			} while (EditNumberCar < 0);
			(*iter)->NumberCar = EditNumberCar;
			cout << "������� ����� ����� ����������: ";
			cin >> EditMarkCar;
			(*iter)->MarkCar = EditMarkCar;
			cout << "��� �� ��������? (Y(��) ��� N(���))" << endl;
			do // �������� �� ��������� ��������
			{
				cin >> EditLife;
				if (EditLife == "Y")
				{
					(*iter)->Life = "���";
				}
				else if (EditLife == "N")
				{
					(*iter)->Life = "̸���";
				}
				else
				{
					cout << "��� ����� �������� ������ ����� Y � N";
				}
			} while ((EditLife != "Y") && (EditLife != "N"));
		}
		iter++;
	}
	void enterProbel(); // �� ������� ������� ������������ � �������� ����
}

void DriverList::DisplayLife() // ����� � ��������� ����������
{
	string tLife; // �������� ����������� ��� �������� �� ��������� ��������� (��� �������� ��� ���)
	color(1);
	cout << setw(100) << "--------------------------" << endl;
	cout << setw(100) << "|������ ������� ���������|" << endl;
	cout << setw(100) << "--------------------------" << endl;
	color(2);
	cout << "\n\n-----------------------------------------------------------------------" << endl;
	cout << "|| ID ||    �������    ||     ���     ||    ��������    || ���/̸��� ||" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	if (setPtrsDrivers.empty()) // ���� ������ ��������� ����
		cout << "\n\n***�� ������ ������ ������ ����. �������� ������.***\n" << endl; // ������� ������, ��� �� ����)
	else
	{
		iter = setPtrsDrivers.begin();
		while (iter != setPtrsDrivers.end()) // ������������� ���� ���������
		{
			tLife = (*iter)->GetLife(); // �������� �������� ��������� ����� ������� ��������
			if (tLife != "���") // ���� �������� �� ���...
			{
				color(0);
				cout << "||"
					<< setw(4) << (*iter)->GetID() << "||"
					<< setw(15) << (*iter)->GetFam() << "||"
					<< setw(13) << (*iter)->GetName() << "||"
					<< setw(16) << (*iter)->GetOtch() << "||"
					<< setw(11) << (*iter)->GetLife() << "||" << endl;
				*iter++;
				color(2);
				cout << "-----------------------------------------------------------------------" << endl;
			}
			else *iter++;
		}
	}
	color(0);
	cout << "\n\n";
	void enterProbel(); // �� ������� ������� ������������ � �������� ����
}
//--------------------------------------------------------



void DriverList::DisplayNarushen() // ����� � ������������
{
	int tNarushen; // �������� ����������� ��� �������� ���������� ���������
	color(1);
	cout << setw(100) << "-------------------------------" << endl;
	cout << setw(100) << "|���������� ������ �����������|" << endl;
	cout << setw(100) << "-------------------------------" << endl;
	color(2);
	cout << "\n\n-----------------------------------------------------------------------------------" << endl;
	cout << "|| ID ||    �������    ||     ���     ||    ��������    ||    ����� ���������    ||" << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
	if (setPtrsDrivers.empty()) // ���� ������ ��������� ����
		cout << "\n\n***�� ������ ������ ������ ����. �������� ������.***\n" << endl; // ������� ������, ��� �� ����)
	else
	{
		iter = setPtrsDrivers.begin();
		while (iter != setPtrsDrivers.end()) // ������������� ���� ���������
		{
			tNarushen = (*iter)->GetNarushen(); // �������� �������� ���������� ��������� ������� ��������
			if (tNarushen > 0) // ���� ���� ���� ���� ���������...
			{
				color(0);
				cout << "||"
					<< setw(4) << (*iter)->GetID() << "||"
					<< setw(15) << (*iter)->GetFam() << "||"
					<< setw(13) << (*iter)->GetName() << "||"
					<< setw(16) << (*iter)->GetOtch() << "||"
					<< setw(23) << (*iter)->GetNarushen() << "||" << endl;
				*iter++;
				color(2);
				cout << "-----------------------------------------------------------------------------------" << endl;
			}
			else *iter++;
		}
	}
	color(0);
	cout << "\n\n";
	void enterProbel(); // �� ������� ������� ������������ � �������� ����
}
//--------------------------------------------------------


void DriverList::display() // ����� ������ ��������� (�������� �������)
{
	color(2);
	cout << "\n\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "|| ID  ||   �������   ||     ���     ||    ��������    ||     �����     ||       �����       || � ���� || � �������� ||   �������   || ����� ��������� ||  � ����  ||      �����      || ���/̸��� ||" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	color(0);
	if (setPtrsDrivers.empty()) // ���� ������ ��������� ����
		cout << "\n\n***�� ������ ������ ������ ����. �������� ������.***\n" << endl; // ������� ������, ��� �� ����
	else
	{
		iter = setPtrsDrivers.begin();
		while (iter != setPtrsDrivers.end()) // ������������� ���� ���������
		{
			color(0);
			cout << "||"
				<< setw(5) << (*iter)->GetID() << "||"
				<< setw(13) << (*iter)->GetFam() << "||"
				<< setw(13) << (*iter)->GetName() << "||"
				<< setw(16) << (*iter)->GetOtch() << "||"
				<< setw(15) << (*iter)->GetCity() << "||"
				<< setw(19) << (*iter)->GetStreet() << "||"
				<< setw(8) << (*iter)->GetNumberHome() << "||"
				<< setw(12) << (*iter)->GetNumberFlat() << "||"
				<< setw(13) << (*iter)->GetPhone() << "||"
				<< setw(17) << (*iter)->GetNarushen() << "||"
				<< setw(10) << (*iter)->GetNumberCar() << "||"
				<< setw(17) << (*iter)->GetMarkCar() << "||"
				<< setw(11) << (*iter)->GetLife() << "||" << endl;
			*iter++;
			color(2);
			cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		}
	}
}
//---------------------------------------------------------