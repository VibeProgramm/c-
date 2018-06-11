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
	
	char str[100];
	char c = '|',c1;
	int index = 0;
	int index2 = 0;

	do
	{
		c1 = (char)_getch();
		system("cls");
		if((c1 == 's' || c1 == 'S'))
		{
			index2++;
		}
		if((c1 == 'w' || c1 == 'W'))
		{
			index2--;
		}
		if((c1 == 'D' || c1 == 'd') && index < 99)
		{
		
			for(int i(0); i <= index; i++)
				if(i != index)
					str[i] = ' ';
				else str[i] = c;
			str[index+1] = '\0';
			index++;
		}

		if((c1 == 'a' || c1 == 'A') && index >= 0)
		{
			
			for(int i(0); i < index; i++)
				if(i != index-1)
					str[i] = ' ';
				else str[i] = c;
			str[index] = '\0';
			index--;
		}

		
		for(int i(0); i < index2; i++)
		{
				cout << endl;
		}
		cout << str;
	}while(c1 != 'q');

	

	

	_getch();
	return 0;
}
