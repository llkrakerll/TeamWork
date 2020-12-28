#ifndef __CLASSDRIVERLIST_H__
#define __CLASSDRIVERLIST_H__

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "ClassDriver.h"
using namespace std;

//����� DriverList 
//����� DriverList � ������ ���� ���������.
//�� �������� ��������� ���������� �� ����� Driver
// � ��������� ��� ��� ������
class DriverList
{
private:
	int sID; // ID ��� ������ ���������� � ������
	string EditFam; //������� ��� ��������������
	string EditName; // ��� ��� ��������������
	string EditOtch; //�������� ��� ��������������
	string EditCity; // ����� ��� ��������������
	string EditStreet; //����� ��� ��������������
	int EditNumberHome; //� ���� ��� ��������������
	int EditNumberFlat; //� �������� ��� ��������������
	long long EditPhone; // ����� �������� ��� ��������������
	int EditNarushen; //����� ��������� ��� ��������������
	int EditNumberCar; //����� ���������� ��� ��������������
	string EditMarkCar; //����� ���������� ��� ��������������
	string EditLife; //��� ��� ���� �������� ��� ��������������
	int IDforEdit; // �������� ID ��� ��������������
	list <Driver*> setPtrsDrivers; // ��������� �� ����� ���������
	list <Driver*>::iterator iter; //��������
public:
	~DriverList(); // ���������� (�������� ���������)
	void insertDriver(Driver*); // �������� �������� � ������
	void DisplayNarushen(); // ����� ������ �����������
	void DisplayLife(); // ����� ������ ��������
	void Editing(); // �������������� ���������� � ��������
	void display(); // ����� ������ ���������
};

#endif