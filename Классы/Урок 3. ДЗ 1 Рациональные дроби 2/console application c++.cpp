//Автор: Мурзин Алексей
//Создать класс для представление рациональной дроби m/n, где m и n целые числа


#include <std_lib_facilities.h>
#include "fractions_2.h"

using Program::fractions_2;

int main()
{
	setlocale(LC_ALL, "Russian");

	fractions_2 f1(10),f2(50),f3;
	f3 = f1 + f2;
	f3.reduction();
	f3.Print();

	
	
	cout << f3 << endl;
	
	_getch();
	return 0;
}