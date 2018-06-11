//јвтор: ћурзин јлексей
//выводит возраст в мес€цах
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите ваш возраст ";
		double age;
	cin >> age;
	age *=12;
	cout << "¬ам " << age << " мес€цев\n";
	
	_getch();
	return 0;
}