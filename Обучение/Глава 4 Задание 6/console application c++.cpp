//Автор: Мурзин Алексей
//Добавьте к каждому  введенному  числу типа douЫe  единицу  измерения;  иначе
//говоря, введите значения, такие как 10cm, 2.  Sin, 5ft   или 3.  33m.Допустимыми являются
//четыре  единицы  измерения : cm, m, in, ft.Коэффициенты  преобразо­ вания равны : lm
//-= = 100cm, lin == 2.  54cm, 1ft == 12in.Индикаторы  еди­ ниц измерения введите в
//строку.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian"); cout << "Введите число и единицу измерения\n";
	vector <double> num; double temp_num; //создаем вектор и временную переменую для ввода и добавление данных из переменной в вектор
	vector <string> unit;
	string temp_unit;



	while (cin >> temp_num >> temp_unit)
	{
		num.push_back(temp_num); // создаем контенер для вектора и записываем значение из переменой temp
		unit.push_back(temp_unit);
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++) //создаем цикл до конца вектора 
	{
		

		cout << "i[" << i << "]" << " = " << num[i] << " " << unit[i] << endl; //выводим вектор num по индексу i
																 //if (min_num >= num[i]) min_num = num[i];
	}
	//cout << "Наименьшее значение = " << min_num << endl;

	_getch();
	return 0;
}