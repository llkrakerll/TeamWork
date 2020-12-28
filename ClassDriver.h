#ifndef __CLASSDRIVER_H__
#define __CLASSDRIVER_H__

#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

//����� Driver
class Driver
{
public:
	int ID; //������ ID ��������
	string Fam; //�������
	string Name; // ���
	string Otch; //��������
	string City; // �����
	string Street; //�����
	int NumberHome; //� ����
	int NumberFlat; //� ��������
	long long Phone; // ����� ��������
	int Narushen; //����� ���������
	int NumberCar; //����� ����������
	string MarkCar; //����� ����������
	string Life; //��� ��� ���� ��������
	Driver(int Id, string Fa, string Na, string Ot, string Ci, string St, int Ho, int Fl, long long Ph, int Nar, int NuCa, string MaCa, string Li);
	~Driver();
	int GetID(); // ����������� �������� ������� ID ��������
	string GetFam(); // ����������� �������� �������
	string GetName(); // ����������� �������� �����
	string GetOtch(); // ����������� �������� ��������
	string GetCity(); // ����������� �������� ������
	string GetStreet(); // ����������� �������� �����
    int GetNumberHome(); // ����������� �������� � ����
	int GetNumberFlat(); // ����������� �������� � ��������
    long long GetPhone(); // ����������� �������� � ��������
	int GetNarushen(); // ����������� �������� ����� ���������
	int GetNumberCar(); // ����������� �������� ������ ����������
	string GetMarkCar(); // ����������� �������� ����� ����������
	string GetLife(); // ����������� �������� ��� ��� ���� ��������
};

#endif 