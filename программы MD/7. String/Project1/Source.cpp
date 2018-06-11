/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: String						////
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
	
	char str[80];
	char str2[80];
	cout << "Введите строку: ";
	cin.getline(str,80);
	system("cls");
	cout << "Исходная строка: \"" << str << "\"\n";
	
	int i = strlen(str) - 1,j=0;
	for(; i >= 0; i--,j++)
	{
		str2[j] = str[i];
	}

	str2[j] = '\0';

	cout << "Строка в обратном порядке: " << str2 << endl;

	bool inWord = false;
	bool Word = false;
	int NumberB = 0;
	for(int i(0); str[i] != '\0'; i++)
	{
		if( !(inWord) && isalpha(str[i]) )
		{
			inWord = true;
			Word = false;
		}

		if( !isalpha(str[i]) )
		{
			inWord = false;
		}

		if( inWord )
		{
			if((str[i] == 'b' || str[i] == 'B')  && !Word)
			{
				NumberB++;
				Word = true;
			}
		}
	}

	cout << "Кол-во слов с символом\'b\': " << NumberB << endl; 

	_getch();
	return 0;
}
