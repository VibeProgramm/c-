/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: Array							////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "\t\t***Массивы***\n\n";

	const int N = 10;
	double Arr[N];

	cout << "Заполнение массива Arr[]:\n";
	for(int i(0); i < N; i++)
	{
		cout << "Введите значение для " << i+1 << " элемента: ";
		while(!(cin >> Arr[i]))
		{
			cin.clear();
			while(cin.get() != '\n');

			cout << "Введите значение для " << i+1 << " элемента: ";
		}
	}

	system("cls");

	cout << "Исходный массив:\n";
	for(int i(0); i < N; i++)
	{
		cout << "Arr[" << i << "] = " << Arr[i] << endl;
	}

	double sum = 0;
	double count;
	int index = -1;
	double sredneeAriph;

	cout << "Введите значение которое вы хотите найти: ";
	cin >> count;

	for(int i(0); i < N; i++)
	{
		sum += Arr[i];
		if(index < 0)
		{
			if(count == Arr[i])
				index = i;
		}
	}

	sredneeAriph = sum / N;

	cout << "Индекс искомого элемента: " << index << endl;
	cout << "Сумма всех элементов массива: " << sum << endl;
	cout << "Среднее Арифмитическое: " << sredneeAriph << endl;
	
	cout << "\n\nSortBubble:\n";
	for (int i=N-1;i>0;i--)
	{
		for (int j=0;j<i;j++)
		{
			if(Arr[j]>Arr[j+1])
			{
				double tmp = Arr[j];
				Arr[j] = Arr[j+1];
				Arr[j+1] = tmp;
			}
		 }
	}

	for(int i(0); i < N; i++)
	{
		cout << "Arr[" << i << "] = " << Arr[i] << endl;
	}

	int moda[N];
	int n = 0;
	for(int i(0); i < N; i++)
	{
		for(int j = 0;j < N; j++)
		{
			if(Arr[j] == Arr[i])
			{
				n++;
				moda[i] = n;
			}
		}
		n=0;
	}

	cout << endl;
	int Max = moda[0];
	for(int i(0); i < N; i++)
	{
		cout << "Moda[" << i << "] = " << moda[i] << endl;
		if(moda[i] > Max)
		{
			Max = moda[i];
			n = i;
		}
	}

	cout << "Мода: " << Arr[n] << endl;


	_getch();
	return 0;
}
