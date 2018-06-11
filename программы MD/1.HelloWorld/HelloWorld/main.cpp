/*//////////////////////////
Author:	Denis Markov	////
Name:	output console	////
*///////////////////////////

#include <conio.h>
#include <iostream>

//директива пространства имен объявляем cout в глобальной области
using std::cout;
using std::endl;

//С данной функции происходит вход в программу
int main()
{
	//оператор вывода в поток
	cout << "Hello World!" << endl;
	cout << "Name: \tDenis\n";
	cout << "Sur: \tMarkov\n";

	_getch();
	//успешное завершение программы
	return 0;
}