//�����: ������ �������
//���������  �����  ���������  ��������(������  �����������  �  ����������) � ����������  ��
//����������.��� ������  �������  �����������  ������  '|', ��� ������ �� ����� ����������
//��������, ����������  ��������, ����������  ����� ��� � �� �����.��������  ��������  ��  ��,
//���  ����������  �����, ��  ������ ������� ������� ���������(�����������  �����).

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� �����\n";
	vector<int> num; int temp;

	while (cin >> temp)
		num.push_back(temp);
	int sum = 0, min = num[0], max = num[0];
	for (int i = 0; i < num.size(); i++)
	{
		sum += num[i];
		if (min >= num[i]) min = num[i];
		if (max <= num[i]) max = num[i];
	}
	
	cout << "����� = " << sum << "\n���������� �������� = " << min << "\n������������ �������� = " << max << "\n���-�� �������� = " << num.size() << endl <<"\n\n\n";
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++)
	{
		cout << "[ i ] = " << num[i] << " m" << endl;
	}
	_getch();
	return 0;
}