/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: Покупки						////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t\t***Покупки***\n\n";

	int Cost,Money,Count;

	cout << "Введите кол-во рублей:\n";
	cin  >> Money;
	cout << "Введите стоимость тавара:\n";
	cin  >> Cost;

	Count = Money / Cost;

	cout << "Вы сможите купить: " << Count << " кол. товара!\n";
	
	
	_getch();
	return 0;
}