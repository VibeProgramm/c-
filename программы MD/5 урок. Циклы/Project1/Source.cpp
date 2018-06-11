/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: степени 2						////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "\t\t***“аблица степеней 2***\n\n";

	int n;

	cout << "¬ведите сколько строк должно быть в таблице: ";

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
		cout << "2 в " << i << " степени: " << result << endl;
	}



	_getch();
	return 0;
}
