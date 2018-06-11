/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: “ипы данных					////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>
#include <climits>

using std::cout;
using std::cin;
using std::endl;
using std::ios_base;

int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t\t***BMI***\n\n";
	double BMI,Height,Weight;

	cout << "¬ведите рост в метрах и вес в кг: ";
	cin  >> Height >> Weight;
	
	BMI = Weight / (Height*Height);

	cout << "¬аш BMI: " << BMI << endl;
	
	_getch();
	return 0;
}