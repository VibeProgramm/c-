//�����: ������ �������
//����������  �������  square(), ��  ���������  ��������  ���������;  �����  ������, ���������
//���������  ���   �  �������  ����������  ��������(�������  �  ������� ���, ������ ����, ��  ���
//	�������� � ��� ����� �).����� ���������  ������ ������ ���������, ��������� ������� square() .

#include <std_lib_facilities.h>
int square_plus(int x)
{
	int ans = 0;
	for (int i = 0; i<x; ++i)
	{
		ans += x;
	}
	return ans;
}

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "������� �����\n"; int num; cin >> num;

	cout << num << " = " << square_plus(num);

	_getch();
	return 0;
}