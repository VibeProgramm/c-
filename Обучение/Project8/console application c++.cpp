//Автор: Мурзин Алексей
//Высчитывание среднего арифметического

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите числа\n";

	vector<int> num;
	int average = 0, temp;

	while (cin >> temp) num.push_back(temp);
	
	for (int i = 0; i < num.size(); i++)
	{
		average += num[i];
	}

	cout << "Среднее арифметическое = " << average/num.size();
	_getch();
	return 0;
}