//Автор: Мурзин Алексей
//Напишите шаблонную фукцию меняющуюю местами 2 переменые swap

#include <std_lib_facilities.h>
template <typename T, typename T1>
void Swap(T *a, T1 *b)
{
	 auto temp = *b;
	 *b = *a;
	 *a = temp;
}
int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 10, b = 20;
	Swap(&a,&b);
	cout << a << '\t' << b;

	double d1 = 1.2, d2 = 2.2;
	Swap(&d1, &d2);
	cout << endl << d1 << '\t' << d2;

	char c1 = '1', c2 = '2';
	Swap(&c1, &c2);
	cout << endl << c1 << '\t' << c2 << endl;

	string str1 = "10", str2 = "20";
	Swap(&str1, &str2);
	cout << str1 << '\t' << str2 << endl;
	
	_getch();
	return 0;
}