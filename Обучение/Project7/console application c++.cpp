//јвтор: ћурзин јлексей
//Ќастройте программу так, чтобы она выводила только равные числа.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector <int> num; int temp; //создаем вектор и временную переменую дл€ ввода и добавление данных из переменной в вектор


	while (cin >> temp)
	{
		num.push_back(temp); // создаем контенер дл€ вектора и записываем значение из переменой temp

	}
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++) //создаем цикл до конца вектора 
	{
		if (i == 0 || num[i] == num[i-1])

		cout << "i[" << i << "]" << " = " << num[i] << endl; //выводим вектор num по индексу i
		//if (min_num >= num[i]) min_num = num[i];
	}
	//cout << "Ќаименьшее значение = " << min_num << endl;

	_getch();
	return 0;
}