/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: �������						////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t\t***�������***\n\n";

	int Cost,Money,Count;

	cout << "������� ���-�� ������:\n";
	cin  >> Money;
	cout << "������� ��������� ������:\n";
	cin  >> Cost;

	Count = Money / Cost;

	cout << "�� ������� ������: " << Count << " ���. ������!\n";
	
	
	_getch();
	return 0;
}