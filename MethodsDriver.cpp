#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "ClassDriver.h"

using namespace std;

//������ ������ Driver
//�����������
Driver::Driver(int Id, string Fa, string Na, string Ot, string Ci, string St, int Ho, int Fl, long long Ph, int Nar, int NuCa, string MaCa, string Li) :
ID(Id), Fam(Fa), Name(Na), Otch(Ot), City(Ci), Street(St), NumberHome(Ho), NumberFlat(Fl), Phone(Ph), Narushen(Nar), NumberCar(NuCa), MarkCar(MaCa), Life(Li)
{
}
Driver::~Driver() // ����������
{
}
int Driver::GetID() //������ ���������� id
{
	return ID;
}
string Driver::GetFam() //������ ���������� �������
{
	return Fam;
}
string Driver::GetName() //������ ���������� ���
{
	return Name;
}
string Driver::GetOtch() //������ ���������� ��������
{
	return Otch;
}
string Driver::GetCity() //������ ���������� �����
{
	return City;
}
string Driver::GetStreet() //������ ���������� �����
{
	return Street;
}
int Driver::GetNumberHome() //������ ���������� ����� ����
{
	return NumberHome;
}
int Driver::GetNumberFlat() //������ ���������� ����� ��������
{
	return NumberFlat;
}
long long Driver::GetPhone() //������ ���������� ����� ��������
{
	return Phone;
}
int Driver::GetNarushen() //������ ���������� ���������� ���������
{
	return Narushen;
}
int Driver::GetNumberCar() //������ ���������� ����� ������
{
	return NumberCar;
}
string Driver::GetMarkCar() //������ ���������� ����� ������
{
	return MarkCar;
}
string Driver::GetLife() //������ ���������� �������� � ��������� ��������(���/����)
{
	return Life;
}