/*////////////////////////////////////////
Автор - Марков Денис					//
Class									//
*/////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdexcept>
#include "Account.h"

using namespace std;

using Program::queue2;
using Program::String;
using Program::Stack2; 

int String::number_Elem = 0;


int main(int argc,char** argv)
{
	setlocale(LC_ALL , "Russian");

	/*Stack2<int> st1;
	Stack2<char> st2;

	for(int i(97); i < 123; i++)
	{
		st1.Push(i);
		st2.Push((char)i);
	}

	int i = 0;
	try
	{
		while(i < 26)
		{
			cout << st1.Pop() << " - " << st2.Pop() << endl;
			i++;
		}
	} 
	catch(Stack2<int>::bad_Stack a)
	{
		a.what();
	}
	catch(Stack2<char>::bad_Stack a)
	{
		a.what();
	}*/




	_getch();
	return 0;
}