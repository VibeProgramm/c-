//�����: ������ �������
//�������� ���������, � ������� ������� �������� ����� ���, ��������� �� �����
//�  ��������, ��������  Joe      17   � Barbara    22.  ���  ������  ����  ��������  ��� � ������
//names, � ����� - � ������ scores(� ��������������� �������, ��� ��� ����  names[7] == " J o e 
//	0, ��  scores[7] == 17).����������   ����, �����   ������ No  more(�.�.���������
//		������� ������ ����� ����� ���������� �������).��� ������, ���  ������  ��� ���������, �
//	��������  ���������  ��  ������, ���� ��� ������� ������.�������� �� ������ ��� ����(���, �����)
//	�� ����� � ������.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� ��� � ����\n";
	vector <string> names; string temp1;
	vector <int> scores; int temp2;
	char chouse = 'y';
	bool repeat_word = false;


	while (chouse == 'y')
	{
		cin >> temp1 >> temp2;

		names.push_back(temp1); scores.push_back(temp2);
		do
		{
			cout << "���������� ���� ����� ?(y/n)";
				cin >> chouse;

		} while (chouse !='y' && chouse != 'n');
	}

	

	for (int i = 0; i < names.size(); i++)
	{
		if (i == 0 || names[i] != names[i - 1])
		{
			cout << names[i] << " " << scores[i] << endl;
			
		}
		else  repeat_word = true;
	}


	if (repeat_word == true) cout << "�������� ������������� �����\n";
	_getch();
	return 0;
}