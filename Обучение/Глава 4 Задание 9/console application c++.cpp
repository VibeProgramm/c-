//Автор: Мурзин Алексей
//Вычислите  сумму  введенных  значений(помимо  наименьшего  и  наибольшее) и определите  их
//количество.Как только  увидите  завершающий  символ  '|', вы­ ведите на экран наименьшее
//значение, наибольшее  значение, количество  значе­ ний и их сумму.Обратите  внимание  на  то,
//что  накапливая  сумму, вы  должны выбрать единицу измерения(используйте  метры).

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите числа\n";
	vector<int> num; int temp;

	while (cin >> temp)
		num.push_back(temp);
	int sum = 0, min = num[0], max = num[0];
	for (int i = 0; i < num.size(); i++)
	{
		sum += num[i];
		if (min >= num[i]) min = num[i];
		if (max <= num[i]) max = num[i];
	}
	
	cout << "Сумма = " << sum << "\nНаименьшее значение = " << min << "\nМаксимальное значение = " << max << "\nКол-во значений = " << num.size() << endl <<"\n\n\n";
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++)
	{
		cout << "[ i ] = " << num[i] << " m" << endl;
	}
	_getch();
	return 0;
}