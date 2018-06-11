//Автор: Мурзин Алексей
//Организовать ввод двухзначного натурального числа с клавиатуры.Программа должна определить
//наименьшую и наибольшую цифры, которые входят в состав данного натурального числа

#include <std_lib_facilities.h>
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите число не более 99: ";
	int n; cin >> n;

	int x, y;

	x = n % 10;
	y = n / 10;
	
	if (x != y)
	{

		int min = x, max = x;

		if (min > y) min = y;
		if (max < y) max = y;


		cout << "Минимальное число: " << min << endl << "Максимальное число: " << max << endl;
	}
	else cout << "Числа равны" << endl;
	_getch();
	return 0;
}