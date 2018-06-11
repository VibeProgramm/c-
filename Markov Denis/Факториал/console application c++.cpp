//Автор: Мурзин Алексей
#include <std_lib_facilities.h>

long double fact(int N)
{
	if (N < 0) // если пользователь ввел отрицательное число
		return 0; // возвращаем ноль
	if (N == 0) // если пользователь ввел ноль,
		return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
	else // Во всех остальных случаях
		return N * fact(N - 1); // делаем рекурсию. 
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << fact(100); //5 * 4 * 3 * 2 * 1 = 120


	_getch();
	return 0;
}