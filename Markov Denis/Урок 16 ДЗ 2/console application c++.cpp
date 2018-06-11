//Автор: Мурзин Алексей
//Напишите фунции работающие с массивом (сортировка, среднее значение и т. д.)

#include <std_lib_facilities.h>
template<typename T >
double average(T *arr, const int size_arr)
{
	T sum = 0;
	for (int i = 0; i < size_arr; i++)
	{
		sum += arr[i];
	}
	return (double)sum / (double)size_arr;
}
template<typename T>
void bubble_sort(T array[], size_t size)
{
	for (size_t idx_i = 0; idx_i < size - 1; idx_i++)
	{
		for (size_t idx_j = 0; idx_j < size - idx_i - 1; idx_j++)
		{
			if (array[idx_j + 1] < array[idx_j])
			{
				swap(array[idx_j], array[idx_j + 1]);
			}
		}
	}
}
template<typename T, typename T1>
auto Find(T arr, T1 element, const int size) -> decltype(arr)
{
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] == element)
		{
			return (arr + i);
		}
	}
	return NULL;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "\t\t\t\tСреднее значение\n";
	int a[2] = { 1,3 };
	double b[2] = { 1.2,2.3 };
	cout << average(a, 2) << endl;
	cout << average(b, 2) << endl;
	
	cout << "\n\n\t\t\t\tСортировка массива\n";
	const int size_c1 = 3;
	int c[size_c1] = { 3,2,1 };
	for (int i = 0; i < size_c1; i++)
	{
		cout << c[i] << endl;
	}

	cout << "\t\t\t\tНайти элемент в массиве\n\n";
	
	int *Find_ptr = Find(c, 3, 2);
	cout << *Find_ptr;
	
	

	_getch();
	return 0;
}