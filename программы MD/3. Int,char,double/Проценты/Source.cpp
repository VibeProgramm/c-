/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: Проценты						////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t\t***Проценты***\n\n";

	double a,b;

	cout << "Введите 2 числа: ";
	cin  >> a >> b;

	double Percent;

	Percent = a / b * 100; 
	
	cout << "Кол-во процентов 1 от 2: " << Percent << "%\n";
	
	_getch();
	return 0;
}