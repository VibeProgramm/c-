//�����: ������ �������
// �������� ������� �� ���������� ����� ���������� �� n �� m ��������� ���������� ����������
//������� n!/(n-k)!
#include <std_lib_facilities.h>
bool input(int n, int k)
{
	if (k < n)
	{
		if (n > 0 || k > 0) return true;
		else return false;
	}
	else return false;
}
//long double fact(int N)
//{
//	if (N < 0) // ���� ������������ ���� ������������� �����
//		return 0; // ���������� ����
//	if (N == 0) // ���� ������������ ���� ����,
//		return 1; // ���������� ��������� �� ���� - �� �����������, �� ��� 1 =)
//	else // �� ���� ��������� �������
//		return N * fact(N - 1); // ������ ��������. 
//}
long double calculate(int n, int k)
{
	
	return fact(n) / (fact((n - k)));
}
int main()
{
	setlocale(LC_ALL, "Russian");
	

	int n, k;
	cout << "������� 2 ��������������� �����\n";

	cout << "n = "; cin >> n;
	
	cout << "k = "; cin >> k;

	bool inp = input(n, k);

	if (inp)

		cout  << calculate(n, k);

	else cout << "������� ������� ��������\n";
	_getch();
	return 0;
}