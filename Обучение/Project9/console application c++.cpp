//�����: ������ �������
//��������  ������������������  �����  ���� dou�e  �  ������.�����  �������, ���
//������ ��������  ������������  �����  ����������  ����� ����� ��������, ����� ��������� ��
//������������ ��������.��������� � �������� �� ������ ����� ����������(����� ���� ����������).
//������� � �������� �� ������ ���������� � ����������  ���������� ����� ����� ��������� ��������.
//������� � ������ �� �� ������ ������� ���������� ����� ����� ��������� ��������.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector<double> distance;
	double temp;
	cout << "������� ����� ���� double\n";
	while (cin >> temp) distance.push_back(temp);
	cout << "�������� ������\n"; double min_val = distance[0], max_val = distance[0], average = 0;
	for (int i = 0; i < distance.size(); i++)
	{
		cout << "����� � " << i+1 << " " << distance[i] << endl;
	
		if (min_val >= distance[i]) min_val = distance[i];
		if (max_val <= distance[i]) max_val = distance[i];
		average += distance[i];
	}
	cout << "\n\n������� �������� = " << average / distance.size() << "\n����������� �������� = " << min_val
		<< "\n������������ �������� = " << max_val << endl;

	_getch();
	return 0;
}