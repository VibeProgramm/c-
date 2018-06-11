/*//////////////////////////////////////////////
	Автор - Марков Денис					////
	Шаблоны									////
*///////////////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

template<typename T,typename T2 = int>
class Array
{
	T* arr;
	int Max;
	int current_index;
public:
	Array(int size)
	{
		Max = size;
		current_index = 0;
		arr = new T[Max];
	}

	~Array(){delete [] arr;}

	void push(T n)
	{
		arr[current_index] = n;
		current_index++;
	}

	T2 get()
	{
		T2 a = 2;
		return a;
	}

	T operator[](int index);

};

template<typename T,typename T2> T Array<T,T2>::operator[](int index)
{
		if(index < 0 || index > (Max-1))
		{
			cout << "Wrong index!";
			_getch();
			abort();
		}
		else return arr[index];
}




int main(int argc, char** argv)
{
	setlocale(LC_ALL , "Russian");

	Array<double,char> a(3);

	

	cout << a.get();
	

	_getch();
	return 0;
}
