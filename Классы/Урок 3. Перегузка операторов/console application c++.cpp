//Автор: Мурзин Алексей
//Перегрузка операторов 

#include <std_lib_facilities.h>
#include "time.h"



int main()
{
	setlocale(LC_ALL, "Russian");

	Program::time t1(4500);
	Program::time t2(2, 35, 21);
	Program::time t3;

	t3 = t1 + t2;

	cout << t3 << endl << endl;

	Program::Vector v1(30,50);
	Program::Vector v2(6.56, 1.34, Program::Polar);
	Program::Vector v3;

	v3 = v1 + v2;

	cout << v3 << endl;

	//cout << v1 + v2; //не работает по неизвестной причине

	_getch();
	return 0;
}