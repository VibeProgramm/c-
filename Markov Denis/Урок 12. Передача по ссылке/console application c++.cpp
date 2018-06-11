//Автор Мурзин Алексей
//Передача по ссылке
#include <std_lib_facilities.h>
void Swap(int& a, int &b)
{
	int temp = b;
	a = b;
	b = temp;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int x = 12, y = 13;
	cout << "x = " << x << " y = " << y << endl;
	Swap(x, y);
	cout << "x = " << x << " y = " << y << endl;
	
	_getch();
	return 0;
}