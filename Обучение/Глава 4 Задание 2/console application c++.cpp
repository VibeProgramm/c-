//јвтор: ћурзин јлексей
//»змените программу так, чтобы она выводила на экран строку "наименьшее  из
//двух  значений  равно : ", а затем - меньшее и большее значени€.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector <int> num; int temp; //создаем вектор и временную переменую дл€ ввода и добавление данных из переменной в вектор


	while (cin >> temp)
	{
		num.push_back(temp); // создаем контенер дл€ вектора и записываем значение из переменой temp

	}
	int min_num = num[0];
	for (int i = 0; i < num.size(); i++) //создаем цикл до конца вектора 
	{
		cout << "i[" << i << "]" << " = " << num[i] << endl; //выводим вектор num по индексу i
		if (min_num >= num[i]) min_num = num[i];
	}
	cout << "Ќаименьшее значение = " << min_num << endl;
	
	_getch();
	return 0;
}