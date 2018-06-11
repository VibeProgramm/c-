//Автор: Мурзин Алексей
//Тестовый проект

#include <std_lib_facilities.h>
void test (int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i]++;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[3];

	cout << "Исходный массив\n";
	for (int i = 0; i < 3; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;

	
	
	test(arr,3);
	cout << "Кастомный массив \n";
	for ( int i = 0; i < 3; i++)
	{
		cout << arr[i] << endl;


	}
	cout << endl;
	std::string str = to_string(10);
	cout << str << endl;
	
	_getch();
	return 0;
}