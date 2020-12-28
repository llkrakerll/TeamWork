#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "GlobalMethods.h"
#include "ClassDriverInputScreen.h"

using namespace std;

int NewID; //Личный ID каждого водителя. При добавлении нового водителя увеличивается на 1

//метод класса DriverInputScreen
void DriverInputScreen::setDriver() // добавить данные о водителе
{
	color(0);
	cout << "Фамилия: ";
	getaLine(NewFam);
	cout << "Имя: ";
	getaLine(NewName);
	cout << "Отчество: ";
	getaLine(NewOtch);
	cout << "Город: ";
	getaLine(NewCity);
	cout << "Улица: ";
	getaLine(NewStreet);
	cout << "Номер дома: ";
	do
	{
		cin >> NewNumberHome;
		CheckInt(NewNumberHome);
		cin.ignore(25, '\n');
	} while (NewNumberHome < 0);
	cout << "Номер квартиры: ";
	do
	{
		cin >> NewNumberFlat;
		CheckInt(NewNumberFlat);
		cin.ignore(25, '\n');
	} while (NewNumberFlat < 0);
	cout << "Телефон: ";
	do
	{
		cin >> NewPhone;
		CheckLong(NewPhone);
		cin.ignore(25, '\n');
	} while (NewPhone < 0);
	cout << "Число нарушений: ";
	do
	{
		cin >> NewNarushen;
		CheckInt(NewNarushen);
		cin.ignore(25, '\n');
	} while (NewNarushen < 0);
	cout << "Номер автомобиля:";
	do
	{
		cin >> NewNumberCar;
		CheckInt(NewNumberCar);
		cin.ignore(25, '\n');
	} while (NewNumberCar < 0);
	cout << "Марка автомобиля: ";
	getaLine(NewMarkCar);
	NewID = NewID++;
	NewLife = ("Жив");

	Driver* ptrDriver = new Driver(NewID, NewFam, NewName, NewOtch, NewCity, NewStreet, NewNumberHome, NewNumberFlat, NewPhone, NewNarushen, NewNumberCar, NewMarkCar, NewLife); // создать жильца
	ptrDriverList->insertDriver(ptrDriver); // занести в список водителей

}
//---------------------------------------------------------