/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: Matrix						////
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
	
	int a,b,c,d;//����������� ������
	do
	{
		system("cls");
		cout << "������� ����������� 1 �������: ";
		cin  >> a >> b;
		cout << "������� ����������� 2 �������: ";
		cin  >> c >> d;
		if(b != c)
		{
			system("cls");
			cout << "���������� ��������!";
			_getch();
		}
	}while(b != c);


	int **M1 = new int*[a];
	for(int i(0); i < a; i++)
		M1[i] = new int[b];

	int **M2 = new int*[c];
	for(int i(0); i < c; i++)
		M2[i] = new int[d];

	
	int **M3 = new int*[a];
	for(int i(0); i < a; i++)
		M3[i] = new int[d];
	
	system("cls");
	cout << "��������� 1 ������� " << a << "x" << b << " :\n";

	for(int i(0); i < a; i++)
	{
		for(int j(0); j < b; j++)
		{
			cin >> M1[i][j];
			
		}
	}

	for(int i(0); i < a; i++)
	{
		for(int j(0); j < d; j++)
		{
			M3[i][j] = 0;//�������� �������
		}
	}


	system("cls");

	cout << "��������� 2 ������� " << c << "x" << d << " :\n";

	for(int i(0); i < c; i++)
	{
		for(int j(0); j < d; j++)
		{
			cin >> M2[i][j];
		}
	}
	//1 2
	//2 1
	//1 1
	

	system("cls");
	for(int i=0;i<a; i++)
	{
		for(int j=0; j<d; j++)
		{
			for(int m=0; m<b; m++)
			{
				M3[i][j] += M1[i][m]*M2[m][j];
			}
		}
	}

	for(int i(0),l(0);i < a || l < c;)
	{
		cout << "| ";
		if(i < a)
		{
			for(int j(0); j < b; j++)
			{
				cout << M1[i][j] << " ";
			}
		
			i++;
		}
		
		cout << "\t|      | ";
		
		if(l < c)
		{
			for(int j(0); j < d; j++)
			{
				cout << M2[l][j] << " ";
			}
		
			l++;
		}

		cout << "|";
		cout << endl;
	}

	cout << endl;
	for(int i(0); i < a; i++)
	{
		for(int j(0); j < d; j++)
		{
			cout << M3[i][j] << ' ';
		}
		cout << endl;
	}




	for(int i(0); i < a; i++)
		delete [] M1[i];
	delete [] M1;

	for(int i(0); i < c; i++)
		delete [] M2[i];
	delete [] M2;

	for(int i(0); i < a; i++)
		delete [] M3[i];
	delete [] M3;

	_getch();
	return 0;
}
