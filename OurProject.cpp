// OurProject.cpp
#include "stdafx.h"
#include "ClassInterfaceMenu.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // ����� ������� �����
	system("chcp 1251"); // ����������� ��������� �������

	InterfaceMenu TheInterfaceMenu;
	TheInterfaceMenu.interact(); // ����� ����
	return 0;
}

