//�����: ������ �������
// �������� ������� ������� ������ ������ ����� |-2| = 2(abc)
#include <std_lib_facilities.h>
double mod(double a)
{
	return a > 0 ? a : -a; //����� a > 0 ���������� a �����  ���������� -a
	
}

int main() {
	setlocale(LC_ALL, "Russian");

	cout << mod(-2.1); // ���������� �������� 

	_getch();
	return 0;
}