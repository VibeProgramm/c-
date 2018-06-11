/*////////////////////////////////////////
Автор - Марков Денис					//
Перегрузка операторов					//
*/////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <conio.h>
#include "time.h"

using namespace std;

int main(int argc,char** argv)
{
	setlocale(LC_ALL , "Russian");
	
	try
	{
		Drob a(1,0);
	}

	catch(bad_exception& a)
	{
		cout << a.what();
	}


	
	_getch();
	return 0;
}