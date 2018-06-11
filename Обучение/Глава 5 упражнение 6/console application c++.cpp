//�����: ������ �������
//��������  ���������, ����������������� ����� ������� � ����� ����������
//� ��������(�� �������  �� �������  4.3.3).��� ���� ����� ����������  �������� ����������,
//����������� ������ �� ������� 5.8.
//��������, 72 �F �������������� ���������(72 - 32) / 2 = 20 ���� 1 / 10 �� 20, �.�. 22 �C.
//��� �������� ����������� �� ����� ������� � ����� ���������� ����� �������� �������� ����� �� 9 / 5 � ��������� 32.

#include <std_lib_facilities.h>
double trans_cel_far(char chouse, double num)
{
	//�� ����� F � �� ������ C
	if (chouse != 'F' && chouse != 'C') throw exception ("�� ��������� ������� �������\n");
	else if (chouse == 'F')
	{
		double far = num * 1.8 + 32;
		return far;

	}
	else if (chouse == 'C')
	{

		double temp = (num - 32) / 2;
		double cel = temp + (temp / 10 * 1);
		return cel;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	cout << "�������� ���� ��������� (C/F)\n";
	char chouse; 
	double num;
	try
	{
		cin >> chouse; 
		cout << "������� ���-��\n"; 
		cin >> num;
		double res = trans_cel_far(chouse, num);

		cout << "��������� " << res;
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}
	

	_getch();
	return 0;
}