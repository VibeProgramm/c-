//�����: ������ �������


#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");


	int lower = 1;
	int upper = 100;
	int middle;

	char answer;
	cout << "��� ��������� ������� �� 7 �������� ����� ����� �� ������ ����� � ��������� �� 1 �� 100\n";

	while (upper > lower)
	{
		middle = (upper + lower) / 2;
		//��������� �������� �����
		do {
			cout << "���� ����� ������ ��� ����� " << middle << " ?(y/n)\n";
			cin >> answer;
		} while (answer != 'y' && answer != 'n');


		if (answer == 'y') upper = middle;
		else lower = middle + 1;

		cout << "[ " << lower << " ]:[ " << upper << " ]\n" ;
	}
	cout << "���� ����� " << upper;
	_getch();
	return 0;
}