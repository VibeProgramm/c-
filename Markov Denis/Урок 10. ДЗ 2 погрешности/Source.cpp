#include <std_lib_facilities.h>

bool input(int a, int b)
{
	if (a < 0 || b < 0 ) return false;
	else return true;

}
int absolute_error(int a, int b)
{
	return abs(a - b);
}
double relrelative_error(int a, int b)
{
	int abs = absolute_error(a, b);
	double rel = 0;
	a < b ? rel = (double)abs / b : rel = (double)abs / b;

	return rel* 100;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	

	cout << "Введите точное целое значение:\n"; cin >> a;
	//system("cls");
	cout << "Введите округленое значение:\n"; cin >> b;

	bool inp = input(a, b);
	if (inp)
	{
		cout << "Абсолютная погрешность:\n" << absolute_error(a, b) << endl;

		cout << "Относительная погрешность:\n" << relrelative_error(a, b) << "%" << endl;

	}
	else cout << "Неверно введены значения\n";
	_getch();
	return 0;
}