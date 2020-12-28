#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "GlobalMethods.h"

using namespace std;

void getaLine(string& inStr) // ��������� ������ ������
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); //����� ������������ �������� � ������ ����������
	inStr = temp;
}

char getaChar() // ��������� �������
{
	char ch = cin.get();
	cin.ignore(20, '\n'); //����� ������������ �������� � ������ ����������
	return ch;
}

void enterProbel() //
{
	int key = 1;
	cout << "������� ������ ��� �����������";
	while (key)
	{
		char ch = _getch();
		int code = static_cast<int>(ch);
		if (ch == 32)
			key = 0;
	}
}

void color(int color) // ����� � ������ ������
{
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
	switch (color)
	{
	case 0://���� ������ �����
		SetConsoleTextAttribute(hwnd, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	case 1://���� ������ �������
		SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		break;
	case 2://���� ������ �������
		SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_INTENSITY);
		break;
	}
}

int CheckInt(int n) // �������� ����� �� �����������������
{
	if (n < 0)
	{
		cout << "������� ��������������� �����\n";
	}
	else return n;
}

long long CheckLong(long long l) // �������� ����� �� �����������������
{
	if (l < 0)
	{
		cout << "������� ��������������� �����\n";
	}
	else return l;
}