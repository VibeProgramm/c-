/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: ������� �����������		    ////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t***������� ����������� �� ������ � ����������***\n\n";
	//�������� ���������� � ��������(�)
	double Cels, Fahr;

	cout << "������� ����������� �� Cels�: ";
	cin  >> Cels;

	Fahr = Cels*1.8 + 32;

	cout << Cels << "� Cels == " << Fahr << "� Fahr\n";

	_getch();
	return 0;
}