#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "ClassInterfaceMenu.h"
#include "GlobalMethods.h"


using namespace std;


////////////////методы класса InterfaceMenu
InterfaceMenu::InterfaceMenu() // конструктор
{
	ptrDriverList = new DriverList;
}
//---------------------------------------------------------
InterfaceMenu::~InterfaceMenu() // деструктор
{
	delete ptrDriverList;
}
//---------------------------------------------------------

void InterfaceMenu::interact() // наше главное меню из которого мы переходим к другим параметрам (таблицам)
{
	while (true)
	{ // горячие клавиши
		system("cls");
		color(1);
		cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "||        ";
		color(2);
		cout << "F1.Добавить данные ";
		color(1);
		cout << "        ||        ";
		color(2);
		cout << "F2.Редактирование информации ";
		color(1);
		cout << "        ||        ";
		color(2);
		cout << "F3.Список погибших";
		color(1);
		cout << "        ||        ";
		color(2);
		cout << "F4.Поиск нарушителей ";
		color(1);
		cout << "        ||        ";
		color(2);
		cout << "F5.Выход ";
		color(1);
		cout << "        ||" << endl;
		cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		color(0);
		ptrDriverList->display(); // вывод основной таблицы на начальном экране


		switch (_getch())
		{
		case 59://F1.Добавить данные
			system("cls"); // очистка экрана
			ptrDriverInputScreen = new DriverInputScreen(ptrDriverList);
			ptrDriverInputScreen->setDriver();
			delete ptrDriverInputScreen;
			break;
		case 60://F2 Редактировать данные
			system("cls");
			ptrDriverList->Editing();
			break;
		case 61://F3 Список умерших водителей
			system("cls");
			ptrDriverList->DisplayLife();
			system("pause");
			break;
		case 62://F4 Поиск нарушителей
			system("cls");
			ptrDriverList->DisplayNarushen();
			system("pause");
			break;
		case 63://F5 Выход
			return;
			break;
		}
	}
}