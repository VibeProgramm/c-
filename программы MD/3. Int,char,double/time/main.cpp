/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: ����� � ��������				////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "\t\t***�����***\n\n";

	const int Size = 60;//���-�� ������ � ������
	int Seconds,Hours,Minutes,seconds;

	cout << "������� ����� ���-�� ������: ";
	cin  >> Seconds;
	
	Hours = Seconds / (Size*Size);				//3600 ������ � ���� / ������� ����
	Minutes = (Seconds % (Size*Size)) / Size;	//������� ������
	seconds = Seconds % Size;					//������� ���������� �������

	cout << Seconds << " ���: " << Hours << " �. " << Minutes << " �. " << seconds << " ���.\n";
	
	_getch();
	return 0;
}