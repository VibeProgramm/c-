//Автор: Мурзин Алексей
//
#include <std_lib_facilities.h>

double ctok(double c) // преобразует шкалу Цельсия в шкалу Кельвина
{
	if (c <= -273) throw exception("Температура меньше обсалютного нуля\n");
	if (c == 666) throw "неизвестная ошибка";


	int k = c + 273.15;
	return k;
}


int main() {
	setlocale(LC_ALL, "Russian");


	try
	{
		double c = 0;					// объявляем переменную для ввода
		cin >> c;						// вводим температуру в переменную ввода
		double k = ctok(c);				// преобразуем температуру
		cout << k << endl;				// выводим температуру на печать

	}
	catch (const std::exception& ex)
	{
		cout << ex.what();
	}
	catch (const char *ex2)
	{
		cout << ex2 << endl;
	}



	_getch();
	return 0;
}