#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "ClassInterfaceMenu.h"
#include "GlobalMethods.h"


using namespace std;


////////////////������ ������ InterfaceMenu
InterfaceMenu::InterfaceMenu() // �����������
{
	ptrDriverList = new DriverList;
}
//---------------------------------------------------------
InterfaceMenu::~InterfaceMenu() // ����������
{
	delete ptrDriverList;
}
//---------------------------------------------------------

void InterfaceMenu::interact() // ���� ������� ���� �� �������� �� ��������� � ������ ���������� (��������)
{
	while (true)
	{ // ������� �������
		system("cls");
		color(1);
		cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "||        ";
		color(2);
		cout << "F1.�������� ������ ";
		color(1);
		cout << "        ||        ";
		color(2);
		cout << "F2.�������������� ���������� ";
		color(1);
		cout << "        ||        ";
		color(2);
		cout << "F3.������ ��������";
		color(1);
		cout << "        ||        ";
		color(2);
		cout << "F4.����� ����������� ";
		color(1);
		cout << "        ||        ";
		color(2);
		cout << "F5.����� ";
		color(1);
		cout << "        ||" << endl;
		cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		color(0);
		ptrDriverList->display(); // ����� �������� ������� �� ��������� ������


		switch (_getch())
		{
		case 59://F1.�������� ������
			system("cls"); // ������� ������
			ptrDriverInputScreen = new DriverInputScreen(ptrDriverList);
			ptrDriverInputScreen->setDriver();
			delete ptrDriverInputScreen;
			break;
		case 60://F2 ������������� ������
			system("cls");
			ptrDriverList->Editing();
			break;
		case 61://F3 ������ ������� ���������
			system("cls");
			ptrDriverList->DisplayLife();
			system("pause");
			break;
		case 62://F4 ����� �����������
			system("cls");
			ptrDriverList->DisplayNarushen();
			system("pause");
			break;
		case 63://F5 �����
			return;
			break;
		}
	}
}