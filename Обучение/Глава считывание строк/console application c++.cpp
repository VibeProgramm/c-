//�����: ������ �������
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int number_of_words = 0;
	string previous = " "; // �� �����
	string current;
	while (cin >> current)
	{
		++number_of_words; //����������� ������� ����
		if (previous == current)
			cout << "���������� ����: " << number_of_words << " ����������: "
			<< current << endl;
		previous = current;
	}
	_getch();
	return 0;
}
