/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: �����������					////
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

	cout << "\t***�����������***\n\n";

	cout << "� ������� ������������ 4 ��������: +,-,/,*\n\n";

	double a,b;
	char Operator;
	
	cout << "������� �����_��������_�����: ";
	cin  >> a >> Operator >> b;

	cout << "���������: ";
	
	/*
	if(Operator == '+')
		cout << a+b << endl;
	else if(Operator == '-')
		cout << a-b << endl;
	else if(Operator == '*')
		cout << a*b << endl;
	else if(Operator == '/')
		cout << a/b << endl;
	else cout << "�������� ��������\n";
	*/

	switch(Operator)
	{
	case '+': cout << a+b << endl;break;
	case '-': cout << a-b << endl;break;
	case '/': cout << a/b << endl;break;
	case '*': cout << a*b << endl;break;
	
	default: cout << "�������� ��������\n";
	}


	_getch();
	return 0;
}