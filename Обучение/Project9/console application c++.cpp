//Автор: Мурзин Алексей
//Считайте  последовательности  чисел  типа douЫe  в  вектор.Будем  считать, что
//каждое значение  представляет  собой  расстояние  между двумя городами, распо­ ложенными на
//определенном маршруте.Вычислите и выведите на печать общее расстояние(сумму всех расстояний).
//Найдите и выведите на печать наименьшее и наибольшее  расстояние между двумя соседними городами.
//Найдите и выведи­ те на печать среднее расстояние междУ двумя соседними городами.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector<double> distance;
	double temp;
	cout << "Введите числа типа double\n";
	while (cin >> temp) distance.push_back(temp);
	cout << "Введеные данные\n"; double min_val = distance[0], max_val = distance[0], average = 0;
	for (int i = 0; i < distance.size(); i++)
	{
		cout << "Число № " << i+1 << " " << distance[i] << endl;
	
		if (min_val >= distance[i]) min_val = distance[i];
		if (max_val <= distance[i]) max_val = distance[i];
		average += distance[i];
	}
	cout << "\n\nСреднее значения = " << average / distance.size() << "\nМинимальное значение = " << min_val
		<< "\nМаксимальное значение = " << max_val << endl;

	_getch();
	return 0;
}