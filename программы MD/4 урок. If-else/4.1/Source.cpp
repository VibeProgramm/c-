/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: квадратное уравнение			////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::ios_base;


int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "\t***Поиск корней квадратного уравнения***\n\n";

	double a,b,c;//коэфиценты уравнения
	double D;//дискременант
	double x1,x2;//корни уравнения

	cout << "Вид квадратного уравнения: aX^2+bX+c = 0\n\n";

	cout << "Введите коэфицент a: ";
	cin  >> a;

	cout << "Введите коэфицент b: ";
	cin  >> b;

	cout << "Введите коэфицент c: ";
	cin  >> c;

	D = (b*b) - (4*a*c);

	if(D < 0)
		cout << "Корней нет!\n";
	else if(D == 0)
	{
		x1 = -b / (2*a);
		cout << "1 корень уравнения: " << x1 << endl;
	}else{
	
		x1 = (-b + sqrt(D)) / (2*a);
		x2 = (-b - sqrt(D)) / (2*a);
		cout << "1 корень: " << x1 << endl;
		cout << "2 корень: " << x2 << endl;
	}

	_getch();
	return 0;
}