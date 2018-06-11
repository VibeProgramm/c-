//Автор: Мурзин Алексей
//Найти алгебраическую сумму для выражения: 1k + 2k + 3k + … + Nk. N и степень k вводит пользователь.

#include <std_lib_facilities.h>
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите N: ";
	int n; cin >> n;

	cout << "Введите K: ";
	int k; cin >> k;

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += pow(i, k);
	}
	cout << "Сумма = " << sum;
	_getch();
	return 0;
}