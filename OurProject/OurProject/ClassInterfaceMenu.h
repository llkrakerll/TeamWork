#ifndef __CLASSINTERFACEMENU_H__
#define __CLASSINTERFACEMENU_H__

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "ClassDriverList.h"
#include "ClassDriverInputScreen.h"
using namespace std;

//����� InterfaceMenu
class InterfaceMenu
{
private:
	DriverList* ptrDriverList; // ��������� �� ������ ���������
	DriverInputScreen* ptrDriverInputScreen; // ��������� �� ����������� �������, ���� ������������ ����� ������ ������ � ����� ��������
public:
	InterfaceMenu(); // �����������
	~InterfaceMenu(); // ����������
	void interact(); // �������� ����
};

#endif