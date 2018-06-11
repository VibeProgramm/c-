//�����: ������ �������
//�������� �������� ����������� ����� ��������� ������. (���������� ���� ��� �������)
#include <std_lib_facilities.h>
struct Auto
{
	char *name;
	int yers;
	int cost;

};
void init(Auto a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << i + 1 << ":\n";
		cout << "������� ����� ����������:\n";
		a[i].name = new char[40];
		cin.get();
		cin.getline(a[i].name, 40);

		cout << "������� ��� ����������:\n";
		while (!(cin >> a[i].yers) || a[i].yers < 1900 || a[i].yers > 2018)
		{
			cout << "�� ����� ������� ���\n\n";
			cout << "��������� �������!\n";
		}

		cout << "������� ���� ���������� � $\n";
		while (!(cin >> a[i].cost) || a[i].cost < 0)
		{
			cout << "�� ����� ������� ����\n\n";
			cout << "��������� �������!\n";
		}
		cout << endl;
	}

}
void ShowAuto(Auto a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << i + 1 << " ����\n";
		cout << "�����" << a[i].name << endl;
		cout << "��� ������� ���������� " << a[i].yers << endl;
		cout << "���� ��������� " << a[i].cost << endl;
		cout << "------------------------------" << endl;
	}
}
void Free(const Auto a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		delete[] a[i].name;
	}
}
void menu()
{
	cout << "1. ������� ��������\n";
	cout << "2. ������� ��������\n";
	cout << "3. ����� �� ���������\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "*********����***********\n\n\n";

	int N;
	cout << "������� ���-�� �����������: "; cin >> N;

	Auto *car = new Auto[N];
	
	char c;
	
	do
	{
		menu();
		cin >> c;
	
		switch (c)
		{
		case '1': system("cls"); init(car, N); break;
		case '2': system("cls"); ShowAuto(car, N); break;
		case '3': return 0; break;
		default: cout << "������� ������� ����!\n" << "��������� �������\n"; break;
			
		}

	} while (c != '3');

	Free(car, N);
	delete[] car;
	_getch();
	return 0;
}