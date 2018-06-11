//Автор: Мурзин Алексей
// написать функцию которая найдет модуль числа |-2| = 2(abc)
#include <std_lib_facilities.h>
double mod(double a)
{
	return a > 0 ? a : -a; //еслии a > 0 возвращаем a иначе  возвращяем -a
	
}

int main() {
	setlocale(LC_ALL, "Russian");

	cout << mod(-2.1); // абсолютное значение 

	_getch();
	return 0;
}