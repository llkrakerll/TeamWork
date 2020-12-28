#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "GlobalMethods.h"

using namespace std;

void getaLine(string& inStr) // получение строки текста
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); //число пропускаемых символов и символ разделения
	inStr = temp;
}

char getaChar() // получение символа
{
	char ch = cin.get();
	cin.ignore(20, '\n'); //число пропускаемых символов и символ разделения
	return ch;
}

void enterProbel() //
{
	int key = 1;
	cout << "Нажмите пробел для продолжения";
	while (key)
	{
		char ch = _getch();
		int code = static_cast<int>(ch);
		if (ch == 32)
			key = 0;
	}
}

void color(int color) // Кейсы с цветом текста
{
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
	switch (color)
	{
	case 0://Цвет текста белый
		SetConsoleTextAttribute(hwnd, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	case 1://Цвет текста Зеленый
		SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		break;
	case 2://Цвет текста Красный
		SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_INTENSITY);
		break;
	}
}

int CheckInt(int n) // проверка числа на неотрицательность
{
	if (n < 0)
	{
		cout << "Введите неотрицательное число\n";
	}
	else return n;
}

long long CheckLong(long long l) // проверка числа на неотрицательность
{
	if (l < 0)
	{
		cout << "Введите неотрицательное число\n";
	}
	else return l;
}