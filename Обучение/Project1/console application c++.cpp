//Автор: Мурзин Алексей
//Присваивание типу int значения char
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");

	int a; cout << "Введите чило\n"; cin >> a;
	char c = a;
	int b = c;
	if (a != b)
		cout << "Ой!: " << a << " = " << b << endl;
	else cout << "Ого! Мы  попучили бопьшие значения типа char\n" << "a = " << a
		<< "\nb = " << b;
	_getch();
	return 0;
}