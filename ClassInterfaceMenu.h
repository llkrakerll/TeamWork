#ifndef __CLASSINTERFACEMENU_H__
#define __CLASSINTERFACEMENU_H__

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "ClassDriverList.h"
#include "ClassDriverInputScreen.h"
using namespace std;

//класс InterfaceMenu
class InterfaceMenu
{
private:
	DriverList* ptrDriverList; // ”казатель на список водителей
	DriverInputScreen* ptrDriverInputScreen; // ”казатель на отображение Ђэкранаї, куда пользователь может ввести данные о новом водителе
public:
	InterfaceMenu(); // конструктор
	~InterfaceMenu(); // деструктор
	void interact(); // основное меню
};

#endif