//�����: ������ �������
//�������� ��������� ���, ����� ��� �������� �� ����� ������ "����������  ��
//����  ��������  ����� : ", � ����� - ������� � ������� ��������.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector <int> num; int temp; //������� ������ � ��������� ��������� ��� ����� � ���������� ������ �� ���������� � ������


	while (cin >> temp)
	{
		num.push_back(temp); // ������� �������� ��� ������� � ���������� �������� �� ��������� temp

	}
	int min_num = num[0];
	for (int i = 0; i < num.size(); i++) //������� ���� �� ����� ������� 
	{
		cout << "i[" << i << "]" << " = " << num[i] << endl; //������� ������ num �� ������� i
		if (min_num >= num[i]) min_num = num[i];
	}
	cout << "���������� �������� = " << min_num << endl;
	
	_getch();
	return 0;
}