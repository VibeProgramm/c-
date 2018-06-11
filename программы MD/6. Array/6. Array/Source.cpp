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

	cout << "\t\t***Простые числа***\n\n";

	const int N = 1000;

	bool SimpleNumber[N+1];//0...15

	for(int i = 2; i < N+1; i++)
		SimpleNumber[i] = true;

	for(int i = 2; i <= N; i++)
	{
		if(SimpleNumber[i])
		{
			for(int j = i*i; j <= N;j += i)
				SimpleNumber[j] = false;	
		}
	}
	for(int i = 2; i < N+1; i++)
		if(SimpleNumber[i])
			cout << i << endl;

	_getch();
	return 0;
}
