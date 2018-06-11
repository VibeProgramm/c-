//Автор: Мурзин Алексей
//Написать фукцию по сортировки массива (void sortbubble(int* ar, int lenght)) сортировка 
// пузырьком

void bubble(int* a, int len)
{
	for (int i = len - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

#include <std_lib_facilities.h>
int main()
{
	setlocale(LC_ALL, "Russian");

	int ar[] = { 3,2,1};
	bubble(ar, 3);
	for (int  i = 0; i < 3; i++)
	{
		cout << ar[i];
	}


	_getch();
	return 0;
}