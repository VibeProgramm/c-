//Автор: Мурзин Алексей
//Напишите  программу, преобразовывающую шкалу Цельсия в шкалу Фаренгейта
//и наоборот(по формуле  из раздела  4.3.3).Для того чтобы распознать  разумные результаты,
//используйте оценку из раздела 5.8.
//Например, 72 °F приблизительно равняется(72 - 32) / 2 = 20 плюс 1 / 10 от 20, т.е. 22 °C.
//Для перевода температуры из шкалы Цельсия в шкалу Фаренгейта нужно умножить исходное число на 9 / 5 и прибавить 32.

#include <std_lib_facilities.h>
double trans_cel_far(char chouse, double num)
{
	//Не равно F и не равноо C
	if (chouse != 'F' && chouse != 'C') throw exception ("Не правильно выбрано условие\n");
	else if (chouse == 'F')
	{
		double far = num * 1.8 + 32;
		return far;

	}
	else if (chouse == 'C')
	{

		double temp = (num - 32) / 2;
		double cel = temp + (temp / 10 * 1);
		return cel;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Выберите куда перевести (C/F)\n";
	char chouse; 
	double num;
	try
	{
		cin >> chouse; 
		cout << "Введите кол-во\n"; 
		cin >> num;
		double res = trans_cel_far(chouse, num);

		cout << "Результат " << res;
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}
	

	_getch();
	return 0;
}