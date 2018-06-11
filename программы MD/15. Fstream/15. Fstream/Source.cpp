/*////////////////////////////////////////
����� - ������ �����					//
Fstream									//
*/////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>

using namespace std;

struct Stek
{
	int key;
	Stek* next;
};

void Print(Stek *b)
{
	Stek *print = b;

	while(print)
	{
		cout << print->key << " -> ";
		print = print->next;
	}
	cout << "NULL\n";
}

void push(Stek**next, int d)
{
    Stek *pv = new Stek;      // ��������� ����� ������������ ���������� ���� stek
    pv->key = d;                // ����������  ��������, ������� ���������� � ����
    pv->next = *next;          // ��������� ����� ������� ����� � ����������
    *next = pv;                // ����� ������� ����� ���������� ��� ��������
}
 
int pop(Stek **next)
{  
    int temp = (*next)->key;		// ��������� � ���������� temp �������� � ������� �����
    Stek *pv = (*next);				// ���������� ��������� �� ������� �����, ����� �����
									// ���������� ���������� ��� ���� ������
    (*next) = (*next)->next;      // �������� ���������� �������������� top �������
    delete pv;					 // ����������� ������, ��� ����� ������� �������
    return temp;				// ���������� ��������, ������� ���� � �������
}

void Print(ostream &os)
{
	os << "Hello world!";
}

int main()
{
	setlocale(LC_ALL , "Russian");
	
	ofstream fout("Text.txt");

	Print(cout);
	Print(fout);

	_getch();
	return 0;
}