//�����: ������ �������
//�������� � �������  ����������  ����� ���� dou�e  �������  ���������;  �����
//������, ������� ��������, ����� ��� 10cm, 2.  Sin, 5ft   ��� 3.  33m.����������� ��������
//������  �������  ��������� : cm, m, in, ft.������������  ��������� ����� ����� : lm
//-= = 100cm, lin == 2.  54cm, 1ft == 12in.����������  ��� ��� ��������� ������� �
//������.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian"); cout << "������� ����� � ������� ���������\n";
	vector <double> num; double temp_num; //������� ������ � ��������� ��������� ��� ����� � ���������� ������ �� ���������� � ������
	vector <string> unit;
	string temp_unit;



	while (cin >> temp_num >> temp_unit)
	{
		num.push_back(temp_num); // ������� �������� ��� ������� � ���������� �������� �� ��������� temp
		unit.push_back(temp_unit);
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++) //������� ���� �� ����� ������� 
	{
		

		cout << "i[" << i << "]" << " = " << num[i] << " " << unit[i] << endl; //������� ������ num �� ������� i
																 //if (min_num >= num[i]) min_num = num[i];
	}
	//cout << "���������� �������� = " << min_num << endl;

	_getch();
	return 0;
}