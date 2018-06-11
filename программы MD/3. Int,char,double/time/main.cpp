/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: Время в секундах				////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t\t***Время***\n\n";

	const int Size = 60;//кол-во секунд в минуте
	int Seconds,Hours,Minutes,seconds;

	cout << "Введите общее кол-во секунд: ";
	cin  >> Seconds;
	
	Hours = Seconds / (Size*Size);				//3600 секунд в часе / Находим часы
	Minutes = (Seconds % (Size*Size)) / Size;	//находим минуты
	seconds = Seconds % Size;					//Находим оставшиеся секунды

	cout << Seconds << " сек: " << Hours << " ч. " << Minutes << " м. " << seconds << " сек.\n";
	
	_getch();
	return 0;
}