//�����: ������ �������
//������������ ���� int �������� char
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");

	int a; cout << "������� ����\n"; cin >> a;
	char c = a;
	int b = c;
	if (a != b)
		cout << "��!: " << a << " = " << b << endl;
	else cout << "���! ��  �������� ������� �������� ���� char\n" << "a = " << a
		<< "\nb = " << b;
	_getch();
	return 0;
}