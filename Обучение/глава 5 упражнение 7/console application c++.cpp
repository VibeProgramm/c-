//Автор: Мурзин Алексей
#include <std_lib_facilities.h>
void squar_equa(double a, double b , double c) 
{
	double d, x1, x2;
	d = b * b - 4 * a *c;
	if (d < 0)	throw exception("D < 0\n");
	else
		x1 = -b + sqrt(d) / 2 * a;
		x2 = -b - sqrt(d) / 2 * a;
		cout << "x1 = " << x1 << "\nx2 = " << x2;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, c; cout << "Введите a b c\n"; cin >> a >> b >> c;
	try
	{
		squar_equa(a, b, c);
	}
	catch (const std::exception& ex)
	{
		ex.what();
	}
	
	_getch();
	return 0;
}