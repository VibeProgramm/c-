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

	cout << "***��������***\n\n";

	const int N = 10;
	double Students[N];

	cout << "���� ������������ ���������:\n";
	for(int i(0); i < N; i++)
	{
		cout << "������� ��.������ ��� " << i+1 << " ��������: ";
		while((!(cin >> Students[i])) || !(Students[i] >= 0 && Students[i] <= 5))
		{
			cin.clear();
			while(cin.get() != '\n');

			cout << "������� ��.������ ��� " << i+1 << " ��������: ";
		}
	}
	system("cls");
	cout << "�������� ������:\n";
	for(int i(0); i < N; i++)
	{
		cout << "Students[" << i << "] = " << Students[i] << endl;
	}

	for(int i(0); i < N; i++)
	{
		if(Students[i] < 2.5)
		{
			cout << "�� ��������� " << i+1 << " -�� ��������)\n";
			Students[i] = -1;
		}
	}

	_getch();
	return 0;
}
