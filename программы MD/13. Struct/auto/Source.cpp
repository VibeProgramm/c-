/*////////////////////////////////////////
����� - ������ �����					//
��������� ������						//
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
		cout << "������� ����� ����������: ";
		a[i].name = new char[40];
		cin.get();
		cin.getline(a[i].name,40);

		cout << "������� ��� �������: ";
		while(!(cin >> a[i].year) || a[i].year < 1900 || a[i].year > 2013)
		{
			cout << "������ �����! ���������!\n\n";
			cout << "������� ��� �������: ";
		}

		cout << "������� ���� ���������� � $: ";
		while(!(cin >> a[i].cost) || a[i].cost < 0.0 )
		{
			cout << "������ �����! ���������!\n\n";
			cout << "������� ���� ���������� � $: ";
		}
		cout << endl;
	}
}

void ShowAuto(const Auto a[],int length)
{
	for(int i(0); i < length; i++)
	{
		cout << i+1 << " ����:\n";
		cout << "�����: " << a[i].name << endl;
		cout << "��� �������: " << a[i].year << endl;
		cout << "����: " << a[i].cost << "$" << endl;
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
	cout << "1. ������� ���������:\n";
	cout << "2. ������� ���������:\n";
	cout << "3. �����:\n";
}


int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "***����***\n\n";

	int N;
	cout << "������� ���-�� �����������: ";
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
			default: cout << "�������� ����� ����!\n\n";
		}
	
	}while(c != '3');
	

	
	Free(car,N);
	delete [] car;
	
	_getch();
	return 0;
}