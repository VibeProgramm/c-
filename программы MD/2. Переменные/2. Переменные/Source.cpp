/*//////////////////////////////////////
Author: Denis Markov				////	 
Name: �������� ������ � ���������   ////
*///////////////////////////////////////

#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL , "Russian");
	
	const int Size = 1024;
	int Gigabytes;//��������
	int Megabytes;//��������
	int Kbytes;//��������
	unsigned long long bytes;//�����


	cout << "������� ���-�� ��������: ";
	cin  >> Gigabytes;

	Megabytes = Gigabytes * Size;
	Kbytes = Megabytes * Size;
	bytes = (unsigned long long)Kbytes * (unsigned long long)Size;

	cout << "Gigabytes:\t" << Gigabytes << endl;
	cout << "Megabytes:\t" << Megabytes << endl;
	cout << "Kbytes:\t" << Kbytes << endl;
	cout << "Bytes:\t" << bytes << endl;
	

	_getch();
	return 0;
}