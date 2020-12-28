#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "ClassDriverList.h"
#include "GlobalMethods.h"

using namespace std;

//методы класса DriverList
DriverList::~DriverList() // деструктор
{
	while (!setPtrsDrivers.empty()) // удаление всех водителей,
	{ // удаление указателей из контейнера
		iter = setPtrsDrivers.begin();
		delete *iter;
		setPtrsDrivers.erase(iter);
	}
}
//---------------------------------------------------------

void DriverList::insertDriver(Driver* ptrD)
{
	setPtrsDrivers.push_back(ptrD); // вставка нового водителя в список
}
//--------------------------------------------------------

void DriverList::Editing()
{
	color(0);
	cout << "Введите ID водителя, данные которого вы хотите изменить: " << endl;
	cin >> IDforEdit;
	iter = setPtrsDrivers.begin(); // от начала списка
	while (iter != setPtrsDrivers.end()) // до конца списка
	{ // поиск водителя в списке (сравниваем введенное ID с ID в списке)
		sID = (*iter)->GetID();
		if (IDforEdit == sID) // сравниваем введенное id со всеми id в списке
		{
			cout << "Введите новую фамилию: ";
			cin >> EditFam;
			(*iter)->Fam = EditFam;
			cout << "Введите новое имя: ";
			cin >> EditName;
			(*iter)->Name = EditName;
			cout << "Введите новое отчество: ";
			cin >> EditOtch;
			(*iter)->Otch = EditOtch;
			cout << "Введите новый город: ";
			cin >> EditCity;
			(*iter)->City = EditCity;
			cout << "Введите новую улицу: ";
			cin >> EditStreet;
			(*iter)->Street = EditStreet;
			cout << "Введите новый номер дома: ";
			do
			{
				cin >> EditNumberHome;
				CheckInt(EditNumberHome);
			} while (EditNumberHome < 0);
			(*iter)->NumberHome = EditNumberHome;
			cout << "Введите новый номер квартиры: ";
			do
			{
				cin >> EditNumberFlat;
				CheckInt(EditNumberFlat);
			} while (EditNumberFlat < 0);
			(*iter)->NumberFlat = EditNumberFlat;
			cout << "Введите новый номер телефона: ";
			do
			{
				cin >> EditPhone;
				CheckLong(EditPhone);
			} while (EditPhone < 0);
			(*iter)->Phone = EditPhone;
			cout << "Введите новое число нарушений: ";
			do
			{
				cin >> EditNarushen;
				CheckLong(EditNarushen);
			} while (EditNarushen < 0);
			(*iter)->Narushen = EditNarushen;
			cout << "Введите новый номер автомобиля:";
			do
			{
				cin >> EditNumberCar;
				CheckLong(EditNumberCar);
			} while (EditNumberCar < 0);
			(*iter)->NumberCar = EditNumberCar;
			cout << "Введите новую марку автомобиля: ";
			cin >> EditMarkCar;
			(*iter)->MarkCar = EditMarkCar;
			cout << "Жив ли водитель? (Y(да) или N(нет))" << endl;
			do // Проверка на введенное значение
			{
				cin >> EditLife;
				if (EditLife == "Y")
				{
					(*iter)->Life = "Жив";
				}
				else if (EditLife == "N")
				{
					(*iter)->Life = "Мёртв";
				}
				else
				{
					cout << "Для ввода доступны только буквы Y и N";
				}
			} while ((EditLife != "Y") && (EditLife != "N"));
		}
		iter++;
	}
	void enterProbel(); // По нажатию пробела возвращаемся к главному меню
}

void DriverList::DisplayLife() // Экран с погибшими водителями
{
	string tLife; // Перенная необходимая для проверки на жизненное состояние (жив водитель или нет)
	color(1);
	cout << setw(100) << "--------------------------" << endl;
	cout << setw(100) << "|СПИСОК УМЕРШИХ ВОДИТЕЛЕЙ|" << endl;
	cout << setw(100) << "--------------------------" << endl;
	color(2);
	cout << "\n\n-----------------------------------------------------------------------" << endl;
	cout << "|| ID ||    Фамилия    ||     Имя     ||    Отчество    || Жив/Мёртв ||" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	if (setPtrsDrivers.empty()) // если список водителей пуст
		cout << "\n\n***На данный момент список пуст. Добавьте данные.***\n" << endl; // выводим запись, что он пуст)
	else
	{
		iter = setPtrsDrivers.begin();
		while (iter != setPtrsDrivers.end()) // распечатываем всех водителей
		{
			tLife = (*iter)->GetLife(); // получаем значение состояния жизни каждого водителя
			if (tLife != "Жив") // Если водитель не жив...
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
	void enterProbel(); // По нажатию пробела возвращаемся к главному меню
}
//--------------------------------------------------------



void DriverList::DisplayNarushen() // Экран с нарушителями
{
	int tNarushen; // Перенная необходимая для проверки количество нарушений
	color(1);
	cout << setw(100) << "-------------------------------" << endl;
	cout << setw(100) << "|РЕЗУЛЬТАТЫ ПОИСКА НАРУШИТЕЛЕЙ|" << endl;
	cout << setw(100) << "-------------------------------" << endl;
	color(2);
	cout << "\n\n-----------------------------------------------------------------------------------" << endl;
	cout << "|| ID ||    Фамилия    ||     Имя     ||    Отчество    ||    Число нарушений    ||" << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
	if (setPtrsDrivers.empty()) // если список водителей пуст
		cout << "\n\n***На данный момент список пуст. Добавьте данные.***\n" << endl; // выводим запись, что он пуст)
	else
	{
		iter = setPtrsDrivers.begin();
		while (iter != setPtrsDrivers.end()) // распечатываем всех водителей
		{
			tNarushen = (*iter)->GetNarushen(); // получаем значение количества нарушений каждого водителя
			if (tNarushen > 0) // если есть хоть одно нарушение...
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
	void enterProbel(); // По нажатию пробела возвращаемся к главному меню
}
//--------------------------------------------------------


void DriverList::display() // вывод списка водителей (основная таблица)
{
	color(2);
	cout << "\n\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "|| ID  ||   Фамилия   ||     Имя     ||    Отчество    ||     Город     ||       Улица       || № дома || № квартиры ||   Телефон   || Число нарушений ||  № авто  ||      Марка      || Жив/Мёртв ||" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	color(0);
	if (setPtrsDrivers.empty()) // если список водителей пуст
		cout << "\n\n***На данный момент список пуст. Добавьте данные.***\n" << endl; // выводим запись, что он пуст
	else
	{
		iter = setPtrsDrivers.begin();
		while (iter != setPtrsDrivers.end()) // распечатываем всех водителей
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