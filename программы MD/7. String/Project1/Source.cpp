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
	cout << "������� ������: ";
	cin.getline(str,80);
	system("cls");
	cout << "�������� ������: \"" << str << "\"\n";
	
	int i = strlen(str) - 1,j=0;
	for(; i >= 0; i--,j++)
	{
		str2[j] = str[i];
	}

	str2[j] = '\0';

	cout << "������ � �������� �������: " << str2 << endl;

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

	cout << "���-�� ���� � ��������\'b\': " << NumberB << endl; 

	_getch();
	return 0;
}
