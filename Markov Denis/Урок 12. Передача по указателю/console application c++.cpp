//Автор: Мурзин Алексей
// Передача по указателю
#include <std_lib_facilities.h>

bool input(int* a)
{
	if (cin >> *a) return true;
	else return false;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int b = 0;
	input(&b);
	cout << b << endl;

	
	_getch();
	return 0;
}