#include <std_lib_facilities.h>
int Sum(const int p[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += p[i];
	}
	return sum;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int p[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	
	cout << Sum(p, 10) << endl;


	
	_getch();
	return 0;
}