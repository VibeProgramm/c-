//�����: ������ �������
//���� ��������� ��������� � ����� �� �����
#include <std_lib_facilities.h>
struct Employe
{
	char *name;
	double salary;
	int couterPropusl;

};
void Input(Employe *s)
{
	cout << "������� ��� ���������:\n";
	s->name = new char[20];
	
	cin.get();
	cin.getline(s->name, 20);


	cout << "������� �������� ���������:\n";
	cin >> s->salary;

	cout << "������� ���-�� ���������:\n";
	cin >> s->couterPropusl;
	cout << endl;
}
void Delete(Employe *s)
{
	if (s->couterPropusl > 5) cout << "����������: " << s->name << endl;

}
void Free(Employe s[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] s[i].name;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Employe rabi[4];
	
	for (int  i = 0; i < 4; i++)
	{
		cout << i + 1 << " ��������:\n";
		Input(&rabi[i]);
	}
	/*for (int  i = 0; i < 4; i++)
	{
		cout << "��� ��������� " << rabi[i].name << endl;
		cout << "�������� ��������� " << rabi[i].salary << endl;
		cout << "���-�� ��������� " << rabi[i].couterPropusl << endl << endl;
	}*/
	for (int  i = 0; i < 4; i++)
	{
		Delete(&rabi[i]);
	}
	Free(rabi, 4);
	
	_getch();
	return 0;
}