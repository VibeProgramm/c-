/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: Перевод температуры		    ////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t***Перевод температуры по Цельсю в Фаренгейты***\n\n";
	//значения температур в градусах(°)
	double Cels, Fahr;

	cout << "Введите температуру по Cels°: ";
	cin  >> Cels;

	Fahr = Cels*1.8 + 32;

	cout << Cels << "° Cels == " << Fahr << "° Fahr\n";

	_getch();
	return 0;
}