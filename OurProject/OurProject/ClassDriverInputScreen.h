#ifndef __CLASSDRIVERINPUTSCREEN_H__
#define __CLASSDRIVERINPUTSCREEN_H__

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "ClassDriverList.h"
using namespace std;

//����� DriverInputScreen
//����� DriverInputScreen. ��� �����, ���������� �� ����������� �������,
//���� ������������ ����� ������ ������ � ����� ��������:
class DriverInputScreen
{
private:
	DriverList* ptrDriverList; //��������� �� ������ ���������
	string NewFam; // ����� �������
	string NewName; // ����� ���
	string NewOtch; // ����� ��������
	string NewCity; // ����� �����
	string NewStreet; // ����� �����
	int NewNumberHome; // ����� ����� ����
	int NewNumberFlat; // ����� ����� ��������
	long long NewPhone; // ����� ����� ��������
	int NewNarushen; // ����� ����� ���������
	int NewNumberCar; // ����� ����� ������
	string NewMarkCar; // ����� ����� ������
	string NewLife; // ��������� ����� (�� ��������� � ������ ��������� ������ ����� ��������)

public:
	DriverInputScreen(DriverList* ptrDL) : ptrDriverList(ptrDL) // ����������� ��������� �� ������ ���������
	{
	}
	void setDriver(); // �������� ������ � ��������
};

#endif 