//Автор: Мурзин Алексей
//Измените программу так, чтобы она работала с числами типа douЬle, а не int.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector <double> num; double temp; //создаем вектор и временную переменую для ввода и добавление данных из переменной в вектор


	while (cin >> temp)
	{
		num.push_back(temp); // создаем контенер для вектора и записываем значение из переменой temp

	}
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++) //создаем цикл до конца вектора 
	{
		if (i == 0 || num[i] == num[i - 1])

			cout << "i[" << i << "]" << " = " << num[i] << endl; //выводим вектор num по индексу i
																 //if (min_num >= num[i]) min_num = num[i];
	}
	//cout << "Наименьшее значение = " << min_num << endl;

	_getch();
	return 0;
}