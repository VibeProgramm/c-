/*//////////////////////////////////////////////
	Автор - Марков Денис					////
	Наследование							////
*///////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

class A
{
public:
	virtual void show(){cout << "A";}
};

class B: public A
{
public:
	virtual	 void show(){cout << "B";}
};


int main(int argc, char** argv)
{
	setlocale(LC_ALL , "Russian");

	A a;
	B b;

	A *pa = new A[2];

	pa = &b;
	(pa)->show();
	pa++;
	pa = &a;
	pa->show();

	
	
	
	_getch();
	return 0;
}
