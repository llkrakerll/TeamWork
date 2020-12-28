// OurProject.cpp
#include "stdafx.h"
#include "ClassInterfaceMenu.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // задаём русский текст
	system("chcp 1251"); // настраиваем кодировку консоли

	InterfaceMenu TheInterfaceMenu;
	TheInterfaceMenu.interact(); // Вывод меню
	return 0;
}

