//�����: ������ �������
//��������   ���������, �����������   ���������   �������   ������������������
//���������, �.�.������������������, ������������  � ����� 1 1 2 3 5 8 13 21 34. ������ ����� �
//���� ������������������ ����� ����� ���� ����������.������� ��������� '����� ���������, ������� 
//����� �������� � ���������� ���� int.

#include <std_lib_facilities.h>
int fi(int am_num)
{
	if (am_num <= 2) return 1;
	vector <int> fi(am_num);
	int sum;
	fi[0] = 1;
	fi[1] = 1;

	//��������� ��������(fi[0] + fi[����������])
	cout << "1 " << "1 ";


	for (int i = 2; i < fi.size(); i++)
	{
		sum = fi[i-1] + fi[i-2];
		cout << sum << " ";
	}
	

}
//���������� n-e ����� ���������
int fib_n(int n)
{
	if (n <= 2) return 1;
	vector<int> dp(n + 1);
	dp[1] = 1; dp[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� ��� ���������� ������� ��������\n";
	int am_fi; cin >> am_fi;
	int k = fib_n(am_fi);
	cout << k;
	
	_getch();
	return 0;
}