//�����: ������ �������
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� ��� �����������\n1 ���� � ����\n2 ����� ���������� � �������\n3 ���� � �����\n";
	char chose; cin >> chose;
	
	cout << "������� ���-�� �����\n";
	double money; cin >> money;


	switch (chose) {
	case '1': cout << money 
		<< " ���� = " << money * 0.007594 << " ����"; break; 

	case '2': cout << money << " ����� ���������� = "
		<< money * 0.72 << " ��������"; break;;

	case '3': cout << money << " ���� = "
		<< money * 0.72 << " �����"; break;


	default : cout << "� �� ���� ����� ��������"; break;

	}
	_getch();
	return 0;
}