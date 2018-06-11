//Автор: Мурзин Алексей
// Найти квадратный корень, sin, cos (ряд разложений Тейлора)
#include <std_lib_facilities.h>
double sinx(double x)
{
	double n = x;
	double sum = 0;
	int i = 1;
	do
	{
		sum += n;
		n *= -1.0*x*x / ((2 * i) * (2 * i + 1));
		i++;

	} while (abs(n) > 1e-12);


	return sum;
}
double cosx(double x)
{
	double n = 1;
	double sum = 1;
	int i = 1;
	do
	{
		sum += n;
		n *= -1.0 *x*x / ((2 * i - 1)*(2 * i));
		i++;
	} while (abs(n)> 0.000000000001);

	return sum;
}
double Sqrt(const double P, const double x0)
{
	double x = x0;
	while (1)
	{
		double f = x * x - P;
		if (abs(f) < 0.000000000001) break;
		double dx = -f / (2.0*x);
		x += dx;
	}
	return x;
}




int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << sinx(2) << endl;
	cout << cosx(2) << endl;
	cout << Sqrt(25,10) << endl;
	
	_getch();
	return 0;
}