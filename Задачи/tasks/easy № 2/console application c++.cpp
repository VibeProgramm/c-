//�����: ������ �������
//����� �������������� ����� ��� ���������: 1k + 2k + 3k + � + Nk. N � ������� k ������ ������������.

#include <std_lib_facilities.h>
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� N: ";
	int n; cin >> n;

	cout << "������� K: ";
	int k; cin >> k;

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += pow(i, k);
	}
	cout << "����� = " << sum;
	_getch();
	return 0;
}