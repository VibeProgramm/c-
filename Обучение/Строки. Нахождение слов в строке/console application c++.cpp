//�����: ������ �������
//������������ ���-�� ����

#include <std_lib_facilities.h>
int foo(string str)
{
	int noun = 1;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ' && str[i-1] != ' ') noun++;
	}
	return noun;
}


int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� ������\n";
	string str; getline(cin, str);
	
	cout << "� ������ " << foo(str) << " ����" << endl;
	_getch();
	return 0;
}