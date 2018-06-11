//Автор: Мурзин Алексей
//Напишите   программу, вычисляющую   начальный   отрезок   последовательности
//Фибоначчи, т.е.последовательности, начинающиеся  с чисел 1 1 2 3 5 8 13 21 34. Каждое число в
//этой последовательности равно сумме двух предыдущих.Найдите последнее 'число Фибоначчи, которое 
//можно записать в переменную типа int.

#include <std_lib_facilities.h>
int fi(int am_num)
{
	if (am_num <= 2) return 1;
	vector <int> fi(am_num);
	int sum;
	fi[0] = 1;
	fi[1] = 1;

	//вычисляем Фибоначи(fi[0] + fi[последнего])
	cout << "1 " << "1 ";


	for (int i = 2; i < fi.size(); i++)
	{
		sum = fi[i-1] + fi[i-2];
		cout << sum << " ";
	}
	

}
//возвращает n-e число Фибоначчи
int fib_n(int n)
{
	if (n <= 2) return 1;
	vector<int> dp(n + 1);
	dp[1] = 1; dp[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите сколько раз выполнится функция Фибоначи\n";
	int am_fi; cin >> am_fi;
	int k = fib_n(am_fi);
	cout << k;
	
	_getch();
	return 0;
}