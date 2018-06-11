/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: Pointers						////
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
	
	int N,M;
	cout << "Enter N,M: ";
	cin  >> N >> M;

	int **p = new int*[N];
	for(int i(0); i < N; i++)
		p[i] = new int[M];


	for(int i(0); i < N; i++)
	{
		for(int j(0); j < M; j++)
		{
			*(*(p+i)+j) = 0;
			cout << *(*(p+i)+j) << ' ';
		}
		cout << endl;
	}


	for(int i(0); i < N; i++)
		delete [] p[i];
	delete [] p;
	_getch();
	return 0;
}
