//�����: ������ �������
//�������� ��������� ���, ����� ��� �������� � ������� ���� dou�le, � �� int.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector <double> num; double temp; //������� ������ � ��������� ��������� ��� ����� � ���������� ������ �� ���������� � ������


	while (cin >> temp)
	{
		num.push_back(temp); // ������� �������� ��� ������� � ���������� �������� �� ��������� temp

	}
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++) //������� ���� �� ����� ������� 
	{
		if (i == 0 || num[i] == num[i - 1])

			cout << "i[" << i << "]" << " = " << num[i] << endl; //������� ������ num �� ������� i
																 //if (min_num >= num[i]) min_num = num[i];
	}
	//cout << "���������� �������� = " << min_num << endl;

	_getch();
	return 0;
}