#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include "ClassDriver.h"

using namespace std;

//методы класса Driver
//Конструктор
Driver::Driver(int Id, string Fa, string Na, string Ot, string Ci, string St, int Ho, int Fl, long long Ph, int Nar, int NuCa, string MaCa, string Li) :
ID(Id), Fam(Fa), Name(Na), Otch(Ot), City(Ci), Street(St), NumberHome(Ho), NumberFlat(Fl), Phone(Ph), Narushen(Nar), NumberCar(NuCa), MarkCar(MaCa), Life(Li)
{
}
Driver::~Driver() // деструктор
{
}
int Driver::GetID() //геттер возвращает id
{
	return ID;
}
string Driver::GetFam() //геттер возвращает фамилию
{
	return Fam;
}
string Driver::GetName() //геттер возвращает имя
{
	return Name;
}
string Driver::GetOtch() //геттер возвращает отчество
{
	return Otch;
}
string Driver::GetCity() //геттер возвращает город
{
	return City;
}
string Driver::GetStreet() //геттер возвращает улицу
{
	return Street;
}
int Driver::GetNumberHome() //геттер возвращает номер дома
{
	return NumberHome;
}
int Driver::GetNumberFlat() //геттер возвращает номер квартиры
{
	return NumberFlat;
}
long long Driver::GetPhone() //геттер возвращает номер телефона
{
	return Phone;
}
int Driver::GetNarushen() //геттер возвращает количество нарушений
{
	return Narushen;
}
int Driver::GetNumberCar() //геттер возвращает номер машины
{
	return NumberCar;
}
string Driver::GetMarkCar() //геттер возвращает марку машины
{
	return MarkCar;
}
string Driver::GetLife() //геттер возвращает значение о состоянии водителя(жив/мёртв)
{
	return Life;
}