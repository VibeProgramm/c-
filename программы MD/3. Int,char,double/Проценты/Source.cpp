/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: ��������						////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t\t***��������***\n\n";

	double a,b;

	cout << "������� 2 �����: ";
	cin  >> a >> b;

	double Percent;

	Percent = a / b * 100; 
	
	cout << "���-�� ��������� 1 �� 2: " << Percent << "%\n";
	
	_getch();
	return 0;
}