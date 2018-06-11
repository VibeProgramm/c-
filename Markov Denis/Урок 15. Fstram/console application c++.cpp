//�����: ������ �������
//Fstream

#include <std_lib_facilities.h>

struct Stek
{
	int key;
	Stek* next;
};
void Print(Stek *b)
{
	Stek *print = b;

	while (print)
	{
		cout << print->key << " -> ";
		print = print->next;
	}
	cout << "NULL\n";
}
void push(Stek**next, int d)
{
	Stek *pv = new Stek;      // �������� ����� ������������ ���������� ���� stek
	pv->key = d;                // ����������  ��������, ������� ��������� � ����
	pv->next = *next;          // �������� ����� ������� ����� � ����������
	*next = pv;                // ����� ������� ����� ��������� ��� ��������
}
int pop(Stek **next)
{
	int temp = (*next)->key;		// ��������� � ���������� temp �������� � ������� �����
	Stek *pv = (*next);				// ���������� ��������� �� ������� �����, ����� �����
									// ���������� ���������� ��� ���� �����
	(*next) = (*next)->next;      // �������� ��������� �������������� top �������
	delete pv;					 // ����������� �����, ��� ����� ������� �������
	return temp;				// ���������� ��������, ������� ���� � �������
}




void Fout(const string file, const string val, bool ios_app )
{
	//����� � ����
	
	ofstream fout;

	if (ios_app)
	{
		fout.open(file, ios::app);
		fout << val;
		return;
	}

if (!ios_app)
	{
		fout.open(file);
		fout << val;
		return;
	}

	
}
bool Fin(const string file)
{	//���� �� �����
	ifstream fin;

	fin.open(file);

	if (!fin.is_open())
	{
		cout << "������ ����� ���!\n";
		return false;
	}
	int a[4];

	for (int i = 0; i < 4; i++)
	{
		fin >> a[i];
		cout << a[i] << " ";
	}

}

int main()
{
	setlocale(LC_ALL, "Russian");
	Fout("text.txt", "1 2 3 5 7 9", false);
	
	ifstream fin;

	fin.open("text.txt");

	if (!fin.is_open())
	{
		cout << "������ ����� ���!\n";
		_getch(); return -1;
	}
	int n = 0;
	int temp;
	Stek *begin;
	while (!fin.eof())
	{
		fin >> temp;
		push(&begin, temp);
		n++;

	}
	
	for (int i = 0; i < n; i++)
	{
		cout << pop(&begin) << endl;
	}
			
	
	_getch();
	return 0;
}