/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: 	����� ������				////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "\t\t***������***\n\n";

	unsigned int a;

	cout << "������� �����: ";

	if(!(cin >> a))
	{
		cout << "Wrong input!";
		_getch();
		return -1;
	}

	
	for(int i = 1; i <= a; i++)
	{
		for(int j=1; j <= i; j++)
			cout << '*';
	
		cout << endl;
	}

	_getch();
	return 0;
}
