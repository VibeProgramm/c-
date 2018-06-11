/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: ���������� ���������			////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::ios_base;


int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "\t***����� ������ ����������� ���������***\n\n";

	double a,b,c;//���������� ���������
	double D;//������������
	double x1,x2;//����� ���������

	cout << "��� ����������� ���������: aX^2+bX+c = 0\n\n";

	cout << "������� ��������� a: ";
	cin  >> a;

	cout << "������� ��������� b: ";
	cin  >> b;

	cout << "������� ��������� c: ";
	cin  >> c;

	D = (b*b) - (4*a*c);

	if(D < 0)
		cout << "������ ���!\n";
	else if(D == 0)
	{
		x1 = -b / (2*a);
		cout << "1 ������ ���������: " << x1 << endl;
	}else{
	
		x1 = (-b + sqrt(D)) / (2*a);
		x2 = (-b - sqrt(D)) / (2*a);
		cout << "1 ������: " << x1 << endl;
		cout << "2 ������: " << x2 << endl;
	}

	_getch();
	return 0;
}