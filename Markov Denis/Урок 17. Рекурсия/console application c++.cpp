//Автор: Мурзин Алексей
//Написать быстрый поиск элементов в большом массиве
#include <std_lib_facilities.h>
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
template <typename T>
bool Serch(T arr, int val, int size, int min)
{
	if (size == min) return false;
	if (arr[size] == val) return true;
	else
		if (!Serch(arr, val, size - 1,min)) return false;
	
}

template<typename T, typename T1>
auto Find(T arr, T1 element, int left, int right) -> decltype(arr)
{
	int index = (left + right) / 2;
	T1 middle = arr[index];

	if (left == index)
	{
		if (arr[left + 1] == element)
			return  arr + (left + 1);
		else if (arr[left] == element)
			return  arr + (left);
		else
			return NULL;
	}


	if (middle == element)
		return arr + index;
	else if (middle > element)
		Find(arr, element, left, index);
	else  Find(arr, element, index, right);


}
int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n = 3;
	int *arr = new int[n];
	int min = 1;

	for (int i = 0; i < n; i++)
	{
		arr[i] = i++;
	}

	cout << "Мы нашли " << *Find(arr, 10, 1, 3);
	
	delete[] arr;
	
	_getch();
	return 0;
}