/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: ��� ���						////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "\t\t***��� � ���***\n\n";

	unsigned int a,b;

	cout << "������� 2 �����: ";

	if(!(cin >> a >> b))
	{
		cout << "Wrong input!";
		_getch();
		return -1;
	}

	int a1 = a;
	int b1 = b;

	while(b)
	{
		a %= b;// a = a%b
		/*temp = a;
		a = b; 
		b = temp;*/
		swap(a,b);
	}

	int GCD = a; // greatest common divisor
	int LCM = a1*b1 / GCD;//least common multiplier

	cout << "���������� ����� ��������: " << GCD << endl;
	cout << "���������� ����� �������: " << LCM << endl;


	_getch();
	return 0;
}
