/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: ��������� �����				////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t***��������� �����***\n\n";
	//������
	double Dollar, Rub , Euro;
	const double DollarPerRub   = 31.6207;
	const double DollarPerEuro  = 0.7742;	


	cout << "������� ���-�� ��������$: ";
	cin  >> Dollar;

	Rub  = Dollar * DollarPerRub;
	Euro = Dollar * DollarPerEuro;

	cout << Dollar << "$ == " << Rub << " rub == " << Euro << " euro\n";

	_getch();
	return 0;
}