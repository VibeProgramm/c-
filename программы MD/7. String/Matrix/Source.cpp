/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: Матрица 3*3					////
*///////////////////////////////////////

#include <iostream>
#include <cstring>
#include <cctype>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL , "Russian");
	
	double M1[3][3];
	double M2[3][3];
	double M3[3][3];

	cout << "Заполните 1 матрицу 3x3:\n";

	for(int i(0); i < 3; i++)
	{
		for(int j(0); j < 3; j++)
		{
			cin >> M1[i][j];
			M3[i][j] = 0;//обнуляем матрицу
		}
	}

	system("cls");

	cout << "Заполните 2 матрицу 3x3:\n";

	for(int i(0); i < 3; i++)
	{
		for(int j(0); j < 3; j++)
		{
			cin >> M2[i][j];
		}
	}

	system("cls");
	for(int i=0;i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int m=0; m<3; m++)
			{
				M3[i][j] += M1[i][m]*M2[m][j];
			}
		}
	}

	for(int i(0); i < 3; i++)
	{
		cout << "| ";
		for(int j(0); j < 3; j++)
		{
			cout << M1[i][j] << " ";
		}
		cout << "|      | ";
		for(int j(0); j < 3; j++)
		{
			cout << M2[i][j] << " ";
		}
		cout << "|";
		cout << endl;
	}

	for(int i(0); i < 3; i++)
	{
		for(int j(0); j < 3; j++)
		{
			cout << M3[i][j] << ' ';
		}
		cout << endl;
	}

	_getch();
	return 0;
}
