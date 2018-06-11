/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: калукулятор					////
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

	cout << "\t***Калькулятор***\n\n";

	cout << "У данного калькулятора 4 операции: +,-,/,*\n\n";

	double a,b;
	char Operator;
	
	cout << "Введите число_операцию_число: ";
	cin  >> a >> Operator >> b;

	cout << "Рузультат: ";
	
	/*
	if(Operator == '+')
		cout << a+b << endl;
	else if(Operator == '-')
		cout << a-b << endl;
	else if(Operator == '*')
		cout << a*b << endl;
	else if(Operator == '/')
		cout << a/b << endl;
	else cout << "Неверная операция\n";
	*/

	switch(Operator)
	{
	case '+': cout << a+b << endl;break;
	case '-': cout << a-b << endl;break;
	case '/': cout << a/b << endl;break;
	case '*': cout << a*b << endl;break;
	
	default: cout << "Неверняа операция\n";
	}


	_getch();
	return 0;
}