/*////////////////////////////////////////
����� - ������ �����					//
�������������							//
*/////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>

using namespace std;

struct Point
{
	int x;
	int y;
};

struct Rectangle
{
	Point A;
	Point B;
};

void PrintMenu()
{
	cout << "1. ������� ���� ��� ����������\n";
	cout << "2. ������� ���� ��� �����\n";
	cout << "3. ������� �������� �� �����\n";
	cout << "4. ��������� � ����\n";
	cout << "5. ������ �������\n";
	cout << "6. ����������\n";
	cout << "y - ��� ������\n";
}

void Input(istream &is, Rectangle &rect)
{
	int x1,x2,y1,y2;
	is >> x1 >> y1;
	is >> x2 >> y2;

	Point A = {x1,y1};
	Point B = {x2,y2};
	
	rect.A = A;
	rect.B = B;
}

void Read(ofstream &os, const Rectangle &rect)
{
	os << rect.A.x << ' ' << rect.A.y << endl;
	os << rect.B.x << ' ' << rect.B.y << endl;
}

void PrintInfo(const Rectangle &rect)
{
	system("cls");
	cout << "�������������:\n";
	cout << "x1 = " << rect.A.x << " y1 = " << rect.A.y << endl;
	cout << "x2 = " << rect.B.x << " y2 = " << rect.B.y << endl;

	int dist1,dist2;
	dist1 = abs(rect.A.x - rect.B.x);
	dist2 = abs(rect.A.y - rect.B.y);

	cout << "����� 1 �������: " << dist1 << endl;
	cout << "����� 2 �������: " << dist2 << endl;

	cout << "��������: " << 2*(dist1+dist2) << endl;
	cout << "�������: " << (dist1*dist2) <<  endl;

	_getch();
}

int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << "***�������������***\n\n";

	char choise;
	char filename[30];

	ifstream fin;
	ofstream fout;
	Rectangle rect;

	bool fileInput = false;
	bool fileRead = false;

	do
	{
		PrintMenu();
		cin >> choise;

		switch(choise)
		{
		case '1': cout << "\n������� ��� �����: ";
				  cin >> filename;
				  fin.open(filename);
				  if(!fin.is_open())
				  {
					cout << "������ ����� �� ����������!";
					_getch();
					fileInput = false;
					break;
				  }else fileInput = true; break;

		case '2':
					cout << "\n������� ��� �����: ";
					cin >> filename;
					fout.open(filename, ios::app);	break;	


		case '3': if(!fileInput)
				  {
					break;
				  }
				  	Input(fin,rect);
					fileRead = true;
					break;

		case '4':	if(fileRead && fout.is_open())
					{
						Read(fout, rect);
					}
					break;	
	
		case '5': cout << "\n������� 2 ��������������� ������� ��������������(x1,y1,x2,y2):\n";
				  Input(cin,rect); fileRead = true; break;

		case '6': if(fileRead) PrintInfo(rect); break;
		
		}
		system("cls");
			
	}while(choise != 'y');

	_getch();
	return 0;
}