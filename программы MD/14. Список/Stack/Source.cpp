/*////////////////////////////////////////
����� - ������ �����					//
����									//
*/////////////////////////////////////////

#include <iostream>
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


int main()
{
	setlocale(LC_ALL , "Russian");

	Stek* begin = NULL;

	for(int i(0); i < 4;i++)
	{
		push(&begin,i+1);
	}

	Print(begin);
	cout << endl;
	for(int i(0); i < 4;i++)
	{
		cout << pop(&begin) << '\n';
	}
	

	_getch();
	return 0;
}