/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: �����							////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::ios_base;


int main()
{
	setlocale(LC_ALL , "Russian");

	const int N = 64;//64 ������
	unsigned long long result = 1,pow = 1;

	for(int i(1); i <= 64; i++)
	{
		for(int j(0); j < i; j++)
			pow *= 2;
		cout << "� ����� "  << i << " ������ ���������� " << result << " �����!\n"; 
		result += pow;
		pow = 1;
	}

	



	_getch();
	return 0;
}