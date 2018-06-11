/*//////////////////////////////////
Автор - Денис Марков			 ///
Функции							 ///
*///////////////////////////////////
#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;


int n, m;
bool input()
{
	cout << "Введите 2 числа для подсчета числа сочитания из n по m:\n";
	if(!(cin >> n >> m))
		return false;
	else if(n < 0 || m < 0)
		return false;
	else return true;
}
double factorial(int l)
{
	double result = 1;
	for(int i(1); i <= l; i++)
	{
		result *= i;
	}

	return result;
}
double sochetanie()
{
	double result;
	double numerator = factorial(n);
	double denom = factorial(n-m)*factorial(m);
	result = numerator / denom;
	return result;
}
void print(double s)
{
	cout << "R из " << n << " по " << m << " = " << s << endl;
}

double ABS(double a)
{
	return a > 0.0 ? a : -a;
}


double ABSpogresnost(double istina,double priblijenie)
{
	return ABS(istina - priblijenie);
}
double OTNpogresnost(double istina,double priblijenie)
{
	return ABSpogresnost(istina,priblijenie) / istina;		
}
double razmeshenie()
{
	int l = n - m;
	int result = 1;
	for(int i(l+1); i <=n; i++)
		result *= i;
	return result;
}

double sinx(double x)
{
	double n = x;
	double sum = 0.0;
	int i = 1;

	do
	{
		sum += n;
		n *= -1.0*x*x /((2*i)*(2*i+1));
		i++;
	
	}while(ABS(n) > 1e-12);

	return sum;

}

double cosx(double x)
{
    double n = 1.0;
    double sum = 0.0;
    int i = 1;
 
    do
    {
        sum += n;
        n *= -1.0 * x * x / ((2 * i - 1) * (2 * i));
        i++;
    }
    while (ABS(n) > 0.00000000001);
    
    return sum;
}


double Sqrt(const double P, const double x0)
{
  double x = x0; 
  while(1)        
  {
    double f = x * x - P;
    if(ABS(f) < 0.0000000000001) 
      break;
    double dx = -f / (2.0 * x);
    x += dx; 
  }
  return x;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << sinx(M_PI / 6) << endl;
	cout << cosx(M_PI / 3) << endl; 
	cout << Sqrt(17,3) << endl;
	
	
	_getch();
	return 0;
}


