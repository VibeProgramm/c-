//�����: ������ �������
//������������ ���� ������������ ������������ ����� � ����������.��������� ������ ����������
//���������� � ���������� �����, ������� ������ � ������ ������� ������������ �����

#include <std_lib_facilities.h>
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ����� �� ����� 99: ";
	int n; cin >> n;

	int x, y;

	x = n % 10;
	y = n / 10;
	
	if (x != y)
	{

		int min = x, max = x;

		if (min > y) min = y;
		if (max < y) max = y;


		cout << "����������� �����: " << min << endl << "������������ �����: " << max << endl;
	}
	else cout << "����� �����" << endl;
	_getch();
	return 0;
}