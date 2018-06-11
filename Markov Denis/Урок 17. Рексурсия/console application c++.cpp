//Автор: Мурзин Алексей
// Рекурсия
#include <std_lib_facilities.h>
void Print_text(int level)
{
	if (level == 0) return;
	cout << "Вызываем рекурсивную функцию с аргументом " << level << endl;
	Print_text(level - 1);
	cout << "Поднимаемся вверх по рекурсии со значением " << level << endl;
}


void Print_char(char* str, int r, int l, int level)
{
	if (level == 0)	return;
	int middle = (r + l) / 2;
	str[middle] = '|';

	Print_char(str, r, middle, level - 1);
	Print_char(str, middle,l, level - 1);
}
void Print_char_main()
{
	char str[66];
	str[65] = '\0';

	int min = 0, max = 64;
	str[min] = str[max] = '|';

	for (int i = 1; i < 64; i++)

		str[i] = ' ';

	cout << str << endl;

	for (int i = 1; i <= 6; i++)
	{
		Print_char(str, min, max, i);
		cout << str << endl;


		for (int i = 1; i < 64; i++)

			str[i] = ' ';

	}
	

}

template <typename T>
void quick_sort(T arr, int l, int r)
{
	int i, j;
	i = l;
	j = r;
	int middle = arr[(i + j) / 2];

	do
	{
		while (middle > arr[i]) i++;
		while (middle < arr[j]) j--;

		if (i <= j)
		{
			swap(arr[i], arr[j]);
			i++;
			j--;
		}

	} while (i < j);

	if (i < r) quick_sort(arr, i, r);
	if (j > l) quick_sort(arr, l, j);

}
void quick_sort_main()
{
	srand(time(NULL));

	int n = 1'000'000;
	int *arr = new int [n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}


	double t1 = clock();
	quick_sort(arr, 0, n - 1);
	
	double t2 = clock() - t1;
	cout << t2 / CLOCKS_PER_SEC;

	delete[] arr;
}


int main()
{
	setlocale(LC_ALL, "Russian");


	fact(5);
	quick_sort_main();
	


	_getch();
	return 0;
}