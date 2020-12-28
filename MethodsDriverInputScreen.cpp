#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "GlobalMethods.h"
#include "ClassDriverInputScreen.h"

using namespace std;

int NewID; //������ ID ������� ��������. ��� ���������� ������ �������� ������������� �� 1

//����� ������ DriverInputScreen
void DriverInputScreen::setDriver() // �������� ������ � ��������
{
	color(0);
	cout << "�������: ";
	getaLine(NewFam);
	cout << "���: ";
	getaLine(NewName);
	cout << "��������: ";
	getaLine(NewOtch);
	cout << "�����: ";
	getaLine(NewCity);
	cout << "�����: ";
	getaLine(NewStreet);
	cout << "����� ����: ";
	do
	{
		cin >> NewNumberHome;
		CheckInt(NewNumberHome);
		cin.ignore(25, '\n');
	} while (NewNumberHome < 0);
	cout << "����� ��������: ";
	do
	{
		cin >> NewNumberFlat;
		CheckInt(NewNumberFlat);
		cin.ignore(25, '\n');
	} while (NewNumberFlat < 0);
	cout << "�������: ";
	do
	{
		cin >> NewPhone;
		CheckLong(NewPhone);
		cin.ignore(25, '\n');
	} while (NewPhone < 0);
	cout << "����� ���������: ";
	do
	{
		cin >> NewNarushen;
		CheckInt(NewNarushen);
		cin.ignore(25, '\n');
	} while (NewNarushen < 0);
	cout << "����� ����������:";
	do
	{
		cin >> NewNumberCar;
		CheckInt(NewNumberCar);
		cin.ignore(25, '\n');
	} while (NewNumberCar < 0);
	cout << "����� ����������: ";
	getaLine(NewMarkCar);
	NewID = NewID++;
	NewLife = ("���");

	Driver* ptrDriver = new Driver(NewID, NewFam, NewName, NewOtch, NewCity, NewStreet, NewNumberHome, NewNumberFlat, NewPhone, NewNarushen, NewNumberCar, NewMarkCar, NewLife); // ������� ������
	ptrDriverList->insertDriver(ptrDriver); // ������� � ������ ���������

}
//---------------------------------------------------------