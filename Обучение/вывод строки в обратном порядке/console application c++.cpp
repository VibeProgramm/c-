//�����: ������ �������
//�������� ������ � �������� �������
#include <std_lib_facilities.h>
#include "console application c++.h"
string foo(std::string str)
{
	string str2;
	getline(cin, str);
	int size = str.size() - 1; //������� ��������� ������ �� ������

	for (int i = size; i >= 0; i--)
	{
		str2 = str2 + str[i];
	}
	return str2;
}
int main() {
	setlocale(LC_ALL, "Russian");

	cout << "������� ������\n"; 
	string str;
	str = foo(str);

	cout << str;

	_getch();
	return 0;
}