//�����: ������ �������
//��������  ���������, �����������  �������������  �����; ����� ������, ��������
//����� �� ������ cin � �������� �� � ����� cout, ������� ������������� ����� ��� ��� BLEEP.
//������� � ������ �������������� �����, ��������
//string disliked = "Broccoli";
//����� �������� ���������, �������� ��� ��������� ������������� ����.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector<string> words; string temp;
	
	
	while (cin >> temp) words.push_back(temp);
	
	cout << "���-�� ���� � ������� " << words.size() << endl; 
	sort(words.begin(), words.end()); // ��������� �� ��������
	
	
	for (int i = 0; i < words.size(); i++)
	{
		if (i == 0 || words[i - 1] != words[i]) // ��������� ����� �� ��� �����

		{
			if (words[i] != "broccoli" && words[i] != "cucumber") //��������� ����� �� ����� "������������". �� ���� ����� ��� ���� ���� ("����������"), �� ��������� ������� ������� ����� �� �����. ������ �� �����, �� ���� �� �������

				cout << words[i] << endl; 
			else cout << "Bleep" << endl; //���� �� �� ������� ����� "Bleep"
		
		}
	}
	

	_getch();
	return 0;
}