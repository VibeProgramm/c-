//�����: ������ �������
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");


	unsigned int a,b,c; cout << "������� 2 �����\nb = a operator b\n"; cin >> a >> b; //cin a

	//������� ��������
	cout << "������� ���������\n";
	c = ~a;
	cout << "a = " << a << endl << "c = " << c << endl << endl;

	//������� ���������
	cout << "������� ���������\n";
	c = a & b;
	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << endl;

	//������� ��������
	cout << "������� ��������\n";
	c = a | b;
	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << endl;

	//��������� ����� � ����� � ����
	cout << "��������� ����� ����� ��������� a\n";
	cout << "a = " << (a << 1) << endl;
	cout << "��������� ����� ������ ��������� b\n";
	cout << "b = " << (b >> 1) << endl << endl;


	_getch();
	return 0;
}