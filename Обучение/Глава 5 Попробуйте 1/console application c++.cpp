//�����: ������ �������
#include <std_lib_facilities.h>


int main() 
		
{
	setlocale(LC_ALL, "Russian");


	vector<double> temps; // �����������
	double temp = 0;
	double sum = 0;
	while (cin >> temp)     // ��������� � ���������� � ������ temps
		temps.push_back(temp);
	double high_temp = temps[0]; double low_temp = temps[0];
	for (int i = 0; i<temps.size(); ++i)
	{


		if (temps[i] >   high_temp) high_temp = temps[i]; // �������
														  // ��������
		if (temps[i] <   low_temp) low_temp = temps[i];   // �������
														  // ������

		sum += temps[i]; // ��������� �����
	}




	cout << "������������ ����������� " << high_temp << endl;
	cout << "����������� ����������� " << low_temp << endl;
	cout << "������� ����������� " << sum / temps.size();

	

	_getch();
	return 0;
}

