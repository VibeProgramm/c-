//�����: ������ �������
//���������� ������������ ������ ������� ��������  � ���������  ��� ���������� age, �������  ���
//int.����  ���������  ������   �������  ��  �����   ������ : "� ������, �� ������ ��� ������� ���� 
//��������  � ���� �����������  age   ���". ���� ��������  ����������  age ������ ��� ����� � ��� 
//������  ���  �����  11�, �������� �� ����� ������ error("��  ������")


#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� ��� �������\n";
	int age; cin >> age;
	if (age <= 0 || age >= 110)
	cout << "�� ������" << endl;
	else cout << "� ������, �� ������ ��� ������� ���� ��������  � ���� ����������� " << age << " ���\n";

	_getch();
	return 0;
}