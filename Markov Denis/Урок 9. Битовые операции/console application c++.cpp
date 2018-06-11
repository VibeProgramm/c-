//Автор: Мурзин Алексей
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");


	unsigned int a,b,c; cout << "Введите 2 числа\nb = a operator b\n"; cin >> a >> b; //cin a

	//битовая инверсия
	cout << "Битовая интверсия\n";
	c = ~a;
	cout << "a = " << a << endl << "c = " << c << endl << endl;

	//битовое умножение
	cout << "Битовое умножение\n";
	c = a & b;
	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << endl;

	//битовок сложение
	cout << "Битовое сложение\n";
	c = a | b;
	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << endl;

	//побитовый сдвиг в право в лево
	cout << "Подитовый сдвиг влево переменой a\n";
	cout << "a = " << (a << 1) << endl;
	cout << "Подитовый сдвиг вправо переменой b\n";
	cout << "b = " << (b >> 1) << endl << endl;


	_getch();
	return 0;
}