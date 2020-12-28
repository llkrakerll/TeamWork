#ifndef __CLASSDRIVER_H__
#define __CLASSDRIVER_H__

#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

//класс Driver
class Driver
{
public:
	int ID; //Личный ID водителя
	string Fam; //Фамилия
	string Name; // Имя
	string Otch; //Отчество
	string City; // Город
	string Street; //Улица
	int NumberHome; //№ дома
	int NumberFlat; //№ квартиры
	long long Phone; // Номер телефона
	int Narushen; //Число нарушений
	int NumberCar; //Номер автомобиля
	string MarkCar; //Марка автомобиля
	string Life; //Жив или мёртв водитель
	Driver(int Id, string Fa, string Na, string Ot, string Ci, string St, int Ho, int Fl, long long Ph, int Nar, int NuCa, string MaCa, string Li);
	~Driver();
	int GetID(); // Возвращение значения личного ID водителя
	string GetFam(); // Возвращение значения фамилии
	string GetName(); // Возвращение значения имени
	string GetOtch(); // Возвращение значения отчества
	string GetCity(); // Возвращение значения города
	string GetStreet(); // Возвращение значения улицы
    int GetNumberHome(); // Возвращение значения № дома
	int GetNumberFlat(); // Возвращение значения № квартиры
    long long GetPhone(); // Возвращение значения № телефона
	int GetNarushen(); // Возвращение значения числа нарушений
	int GetNumberCar(); // Возвращение значения номера автомобиля
	string GetMarkCar(); // Возвращение значения марки автомобиля
	string GetLife(); // Возвращение значения жив или мёртв водитель
};

#endif 