#ifndef __CLASSDRIVERLIST_H__
#define __CLASSDRIVERLIST_H__

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "ClassDriver.h"
using namespace std;

//класс DriverList 
//класс DriverList Ч список всех водителей.
//ќн содержит множество указателей на класс Driver
// и оперирует ими при выводе
class DriverList
{
private:
	int sID; // ID дл€ поиска совпадений в списке
	string EditFam; //‘амили€ дл€ редактировани€
	string EditName; // »м€ дл€ редактировани€
	string EditOtch; //ќтчество дл€ редактировани€
	string EditCity; // √ород дл€ редактировани€
	string EditStreet; //”лица дл€ редактировани€
	int EditNumberHome; //є дома дл€ редактировани€
	int EditNumberFlat; //є квартиры дл€ редактировани€
	long long EditPhone; // Ќомер телефона дл€ редактировани€
	int EditNarushen; //„исло нарушений дл€ редактировани€
	int EditNumberCar; //Ќомер автомобил€ дл€ редактировани€
	string EditMarkCar; //ћарка автомобил€ дл€ редактировани€
	string EditLife; //∆ив или мЄртв водитель дл€ редактировани€
	int IDforEdit; // ¬водимое ID дл€ редактировани€
	list <Driver*> setPtrsDrivers; // указатели на класс водителей
	list <Driver*>::iterator iter; //итератор
public:
	~DriverList(); // деструктор (удаление водителей)
	void insertDriver(Driver*); // добавить водител€ в список
	void DisplayNarushen(); // вывод списка нарушителей
	void DisplayLife(); // вывод списка погибших
	void Editing(); // редактирование информации о водителе
	void display(); // вывод списка водителей
};

#endif