#ifndef __CLASSDRIVERINPUTSCREEN_H__
#define __CLASSDRIVERINPUTSCREEN_H__

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "ClassDriverList.h"
using namespace std;

//класс DriverInputScreen
//класс DriverInputScreen. Это класс, отвечающий за отображение «экрана»,
//куда пользователь может ввести данные о новом водителе:
class DriverInputScreen
{
private:
	DriverList* ptrDriverList; //Указатель на список водителей
	string NewFam; // Новая фамилия
	string NewName; // Новое имя
	string NewOtch; // Новое отчество
	string NewCity; // Новый город
	string NewStreet; // Новая улица
	int NewNumberHome; // Новый номер дома
	int NewNumberFlat; // Новый номер квартиры
	long long NewPhone; // Новый номер телефона
	int NewNarushen; // Новое число нарушений
	int NewNumberCar; // Новый номер машины
	string NewMarkCar; // Новая марка машины
	string NewLife; // Состояние жизни (по умолчанию в список заносятся только живые водители)

public:
	DriverInputScreen(DriverList* ptrDL) : ptrDriverList(ptrDL) // Производный указатель на список водителей
	{
	}
	void setDriver(); // добавить данные о водителе
};

#endif 