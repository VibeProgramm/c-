/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: If-Else,Switch				////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::ios_base;


int main()
{
	setlocale(LC_ALL , "Russian");

	/*cout << "Enter a,b:";
	cin  >> a >> b;

	cout << "a = " << a << ",b = " << b << endl; 
	cout << "a <= b: " << (a <= b) << endl;
	cout << "a >= b: " << (a >= b) << endl;
	cout << "a == b: " << (a == b) << endl;
	cout << "a != b: " << (a != b) << endl;
	cout << "a < b: " << (a < b) << endl;
	cout << "a > b: " << (a > b) << endl;*/
	
	/*
	bool a = false, b = true;

	cout.setf(ios_base::boolalpha);
	
	cout << "a = " << a << endl;
	cout << "!a = " << (!a) << endl;
	cout << "b = " << b << endl;
	cout << "!b = " << (!b) << endl;

	b = false;

	cout << a << " || " << b << " = " << (a||b) << endl;
	b = true;
	cout << a << " || " << b << " = " << (a||b) << endl;
	a = true;b = false; 
	cout << a << " || " << b << " = " << (a||b) << endl;
	b = true;
	cout << a << " || " << b << " = " << (a||b) << endl << endl;

	a = false;b = false;
	cout << a << " && " << b << " = " << (a&&b) << endl;
	b = true;
	cout << a << " && " << b << " = " << (a&&b) << endl;
	a = true;b = false; 
	cout << a << " && " << b << " = " << (a&&b) << endl;
	b = true;
	cout << a << " && " << b << " = " << (a&&b) << endl;*/

	int Ruble;

	cout << "������� ���-�� ������: ";
	cin  >> Ruble;

	if(Ruble < 0)
	{
		cout << "���� �������� �������������!";
		_getch();
		return -1;
	}
	
	cout << "� ��� " << Ruble << " ";

	if((Ruble%100) >= 11 && (Ruble%100) <= 19)
		cout << "������!\n";
	else
		/*switch(Ruble%10)
		{
		case 1: cout << "�����!\n";break;
		case 2:
		case 3:
		case 4: cout << "�����!\n";break;
	
		default: cout << "������!\n";
		}*/
		if(Ruble%10 == 1)
			cout << "�����!\n";
		else if(Ruble%10 >= 2 && Ruble%10 <= 4)
				cout << "�����!\n";
		else cout << "������!\n";
	
	_getch();
	return 0;
}