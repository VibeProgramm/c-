//�����: ������ �������
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");

	unsigned long long kol = 1, sum = 1, prev = 1;
	while (sum<1000000000000) // ��� 1000 �����
	{
		prev *= 2;
		sum += prev;
		kol++;
		printf("������ %d, Zeren: %d, Vsego: %d\n", kol, prev, sum);
	}
	_getch();
	return 0;
}