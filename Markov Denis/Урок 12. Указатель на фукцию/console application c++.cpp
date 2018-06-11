//Автор: Мурзин Алексей
//Указатель на фукцию
//#include <std_lib_facilities.h>
#include <iostream>
#include <conio.h>

using namespace std;

int* a()
{
	int *b = new int[3]{ 1,2,3 };
	return *&b;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int *ar;
	ar = a();
	
	cout << ar[0] << ar[1] << ar[2];

	_getch();
	return 0;
}