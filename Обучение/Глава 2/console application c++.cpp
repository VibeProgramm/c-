//�����: ������ �������
//������� ������� � �������
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� ��� ������� ";
		double age;
	cin >> age;
	age *=12;
	cout << "��� " << age << " �������\n";
	
	_getch();
	return 0;
}