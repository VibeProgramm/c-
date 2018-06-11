/*////////////////////////////////////////
Автор - Марков Денис					//
template								//
*/////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>
#include <string>

using namespace std;

template<typename T1, typename T2>
auto Print(T1 a, T2 b) -> decltype(a+b)
{
	auto c = a+b;
	return  c;
}

template<typename T>
void Swap(T &a, T &b)
{
	T temp	= a;
	a		= b;
	b		= temp;
}

template<typename T>
void Sort(T arr, int size)
{
	for(int i(0); i < size; i++)
		for(int j(size-1); j > i; j--)
		{
			if(arr[i] > arr[j])
				Swap(arr[i],arr[j]);
		}

}

template<typename T,typename T2>
auto Find(T arr, T2 element, int size) -> decltype(arr)
{
	for(int i(0); i < size; i++)
	{
		if(arr[i] == element)
		{
			return (arr+i);
		}
	}
	return NULL;
}

int main()
{
	setlocale(LC_ALL , "Russian");

	int a[4] = {3,1,7,-2};

	Sort(a,4);

	for(int i(0); i < 4; i++)
	{
		cout << a[i] << endl;
	}
	
	
	int *p1 = Find(a,17,4);

	cout << endl;
	if(p1 != NULL)
		cout << "Искомый элемент: " << *p1 << endl; 
	else cout << "Элемент не найден";

	_getch();
	return 0;
}