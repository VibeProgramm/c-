//Автор: Мурзин Алексей
//шаблоны
#include <std_lib_facilities.h>

template<typename T>
T sum(T a, T b) { return a + b; }
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << sum(12, 3) << endl;

	_getch();
	return 0;
}