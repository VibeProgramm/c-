//Автор: Мурзин Алексей
//Преобразование типа double в тип int в тип char
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	double d = 0;
	while (cin >> d)
	{ 
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d == " << d
			<< " i == " << i
			<< " i2  == " << i2
			<< "char(" << c << ")\n";
	
	


	_getch();
	return 0;
}