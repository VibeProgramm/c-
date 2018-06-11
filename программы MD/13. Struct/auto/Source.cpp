/*////////////////////////////////////////
Автор - Марков Денис					//
Структуры данных						//
*/////////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

struct Auto
{
	char *name;
	int year;
	double cost;
};


void Init(Auto a[] , int length)
{
	for(int i(0); i < length; i++)
	{
		cout << i+1 << ":\n";
		cout << "Введите марку автомобиля: ";
		a[i].name = new char[40];
		cin.get();
		cin.getline(a[i].name,40);

		cout << "Введите год выпуска: ";
		while(!(cin >> a[i].year) || a[i].year < 1900 || a[i].year > 2013)
		{
			cout << "Ошибка ввода! Повторите!\n\n";
			cout << "Введите год выпуска: ";
		}

		cout << "Введите цену автомобиля в $: ";
		while(!(cin >> a[i].cost) || a[i].cost < 0.0 )
		{
			cout << "Ошибка ввода! Повторите!\n\n";
			cout << "Введите цену автомобиля в $: ";
		}
		cout << endl;
	}
}

void ShowAuto(const Auto a[],int length)
{
	for(int i(0); i < length; i++)
	{
		cout << i+1 << " авто:\n";
		cout << "Марка: " << a[i].name << endl;
		cout << "Год выпуска: " << a[i].year << endl;
		cout << "Цена: " << a[i].cost << "$" << endl;
		cout << "----------------------------";
		cout << endl;
	}
}

void Free(Auto a[] , int length)
{
	for(int i(0); i < length; i++)
	{
		delete [] a[i].name;
	}

}

void menu()
{
	cout << "1. Создать коллекцию:\n";
	cout << "2. Вывести коллекцию:\n";
	cout << "3. Выйти:\n";
}


int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "***Авто***\n\n";

	int N;
	cout << "Введите кол-во автомобилей: ";
	cin  >> N;

	Auto *car = new Auto[N];
	
	char c;

	do
	{
		menu();
		cin >> c;

		switch(c)
		{
			case '1': system("cls"); Init(car,N);break;
			case '2': system("cls"); ShowAuto(car,N);break;
			case '3': break;
			default: cout << "Неверный пункт меню!\n\n";
		}
	
	}while(c != '3');
	

	
	Free(car,N);
	delete [] car;
	
	_getch();
	return 0;
}