/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: Студенты						////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "***Студенты***\n\n";

	const int N = 10;
	double Students[N];

	cout << "Ввод успеваемости студентов:\n";
	for(int i(0); i < N; i++)
	{
		cout << "Введите ср.оценку для " << i+1 << " студента: ";
		while((!(cin >> Students[i])) || !(Students[i] >= 0 && Students[i] <= 5))
		{
			cin.clear();
			while(cin.get() != '\n');

			cout << "Введите ср.оценку для " << i+1 << " студента: ";
		}
	}
	system("cls");
	cout << "Исходный массив:\n";
	for(int i(0); i < N; i++)
	{
		cout << "Students[" << i << "] = " << Students[i] << endl;
	}

	for(int i(0); i < N; i++)
	{
		if(Students[i] < 2.5)
		{
			cout << "Мы отчисляем " << i+1 << " -го студента)\n";
			Students[i] = -1;
		}
	}

	_getch();
	return 0;
}
