//Автор: Мурзин Алексей
//Шаблоные классы - 

#include <std_lib_facilities.h>
#include <array>



template <typename T>
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

	~Array()
	{
		delete[] arr;
	}

	void push(T n)
	{
		arr[current_index] = n;
		current_index++;
	}

	T operator [](int index);
	
};

template <typename T>
T Array<T>::operator[](int index)
{
	if (index < 0 || index > (Max - 1))
	{
		cout << "Wrond index\n";
		_getch();
		abort();
	}

	else return arr[index];
}
int main()
{
	setlocale(LC_ALL, "Russian");
	Array<int> a(3);

	a.push(12);

	cout << a[0];

	
	_getch();
	return 0;
}