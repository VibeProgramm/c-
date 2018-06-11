//Автор: Мурзин Алексей
//указатель на функцию

#include <std_lib_facilities.h>
double calc(double a, double b, double (*oper)(double, double))
{
	return (*oper)(a, b);
}
double Sum(double a, double b)
{
	return a + b;
}
double Sub(double a, double b)
{
	return a - b;
}
double Mult(double a, double b)
{
	return a * b;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << calc(10, 20, Sum) << endl;
	cout << calc(10, 20, Sub) << endl;
	cout << calc(10, 20, Mult) << endl;
	
	_getch();
	return 0;
}