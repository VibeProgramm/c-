/*////////////////////////////////////////
Автор - Марков Денис					//
рекурсия								//
*/////////////////////////////////////////

#include <iostream>
#include <random>
#include <time.h>
#include <conio.h>


using namespace std;

template <typename T>
void QuickSort(T arr, int l, int r)
{
	int i,j;
	i = l;
	j = r;
	int middle = arr[(i+j)/2];

	do
	{
		while(middle > arr[i]) i++;
		while(middle < arr[j]) j--;

		if(i <= j)
		{
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	
	}while(i < j);

	if(i < r) QuickSort(arr,i,r);
	if(j > l) QuickSort(arr,l,j);

}


template<typename T>
void Sort(T arr, int size)
{
	for(int i(0); i < size; i++)
		for(int j(size-1); j > i; j--)
		{
			if(arr[i] > arr[j])
				swap(arr[i],arr[j]);
		}

}


unsigned long long Factorial(unsigned int n)
{
	if(n==0)
		return 1;

	return n*Factorial(n-1);
}

template<typename T, typename T1>
auto Find(T arr, T1 element, int left, int right) -> decltype(arr)
{
	int index = (left+right) / 2;
	T1 middle = arr[index];

	if(left == index)
	{
		if(arr[left+1] == element)
			return  arr+(left+1);
		else if(arr[left] == element)
			return  arr+(left);
		else 
			return NULL;
	}


	if(middle == element)
		return arr + index;
	else if(middle > element)
		Find(arr,element,left,index);
	else  Find(arr,element,index,right);


}

int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout  << "7! = " << Factorial(7) << endl;
	
	int *a = new  int[300000000];
	
	double t1 = clock(); 
	for(int i(0); i < 300000000; i++)
		a[i] = i;
	double t2 = clock() - t1;

	cout << "Время в секундах проход циккла: " << t2/CLOCKS_PER_SEC << endl;

	t1 = clock();
	int *pa = Find(a,13545,0,300000000);
	t2 = t2 = clock() - t1;
	cout << "Время в секундах нахождения элемента в массиве: " << t2/CLOCKS_PER_SEC << endl;

	if(pa == NULL)
		cout << "Elem not founded!" << endl;
	else 
		cout << "Искомый элемент: " << *pa << endl;
	
	_getch();
	return 0;
}