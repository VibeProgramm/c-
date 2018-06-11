//�����: ������ �������
//
#include <std_lib_facilities.h>

double ctok(double c) // ����������� ����� ������� � ����� ��������
{
	if (c <= -273) throw exception("����������� ������ ����������� ����\n");
	if (c == 666) throw "����������� ������";


	int k = c + 273.15;
	return k;
}


int main() {
	setlocale(LC_ALL, "Russian");


	try
	{
		double c = 0;					// ��������� ���������� ��� �����
		cin >> c;						// ������ ����������� � ���������� �����
		double k = ctok(c);				// ����������� �����������
		cout << k << endl;				// ������� ����������� �� ������

	}
	catch (const std::exception& ex)
	{
		cout << ex.what();
	}
	catch (const char *ex2)
	{
		cout << ex2 << endl;
	}



	_getch();
	return 0;
}