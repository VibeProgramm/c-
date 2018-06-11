//Автор: Мурзин Алексей
#include <std_lib_facilities.h>
enum color
{
	Red = 1, Grean, Blue
};
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "1.Red\n" << "2.Grean\n" << "3.Blue\n";
	int a; 
	do
	{
		cin >> a;
	} while (a <= 0 || a > 3);

	color c = (color)a;
	switch (c)
	{
	case Red: system("color 4"); cout << "Hello";
		break;
	case Grean:system("color 2"); cout << "Hello";
		break;
	case Blue:system("color 3"); cout << "Hello";
		break;
	
	}
	_getch();
	return 0;
}