/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: ������� 2						////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "\t\t***������� �������� 2***\n\n";

	int n;

	cout << "������� ������� ����� ������ ���� � �������: ";

	if(!(cin >> n) || (n <= 0))
	{
		cout << "Wrong input!";
		_getch();
		return -1;
	}

	int result = 1;
	for(int i = 1; i <= n; i++)
	{
		result *= 2;
		cout << "2 � " << i << " �������: " << result << endl;
	}



	_getch();
	return 0;
}
