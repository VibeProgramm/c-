//�����: ������ �������
#include <std_lib_facilities.h>

long double fact(int N)
{
	if (N < 0) // ���� ������������ ���� ������������� �����
		return 0; // ���������� ����
	if (N == 0) // ���� ������������ ���� ����,
		return 1; // ���������� ��������� �� ���� - �� �����������, �� ��� 1 =)
	else // �� ���� ��������� �������
		return N * fact(N - 1); // ������ ��������. 
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << fact(100); //5 * 4 * 3 * 2 * 1 = 120


	_getch();
	return 0;
}