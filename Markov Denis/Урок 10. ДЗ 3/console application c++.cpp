//Автор: Мурзин Алексей
// Написать функцию по нахождению числа размещения из n по m упростите вычисления факториала
//Формула n!/(n-k)!
#include <std_lib_facilities.h>
bool input(int n, int k)
{
	if (k < n)
	{
		if (n > 0 || k > 0) return true;
		else return false;
	}
	else return false;
}
//long double fact(int N)
//{
//	if (N < 0) // если пользователь ввел отрицательное число
//		return 0; // возвращаем ноль
//	if (N == 0) // если пользователь ввел ноль,
//		return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
//	else // Во всех остальных случаях
//		return N * fact(N - 1); // делаем рекурсию. 
//}
long double calculate(int n, int k)
{
	
	return fact(n) / (fact((n - k)));
}
int main()
{
	setlocale(LC_ALL, "Russian");
	

	int n, k;
	cout << "Введите 2 неотрицательных числа\n";

	cout << "n = "; cin >> n;
	
	cout << "k = "; cin >> k;

	bool inp = input(n, k);

	if (inp)

		cout  << calculate(n, k);

	else cout << "Неверно введено значение\n";
	_getch();
	return 0;
}