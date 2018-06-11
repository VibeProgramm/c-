//Автор: Мурзин Алексей
//Виртуальные диструкторы
//Виртуальные диструкторы нужны для того что бы освободить память для дачерних классов

#include <std_lib_facilities.h>

class A
{
public:
	A() { a = new int[10]; cout << "Constructor A\n"; }
	virtual ~A() { delete[] a; cout << "Dectructor A\n"; };

private:
	int *a;
};

class B: public A
{
public:
	B():A() { a = new int[10]; cout << "Constructor B\n"; }
	virtual ~B() { delete[] a; cout << "Dectructor B\n"; };

private:
	int *a;
};



int main()
{
	setlocale(LC_ALL, "Russian");

	A* b = new B;
	delete b;
	
	_getch();
	return 0;
}