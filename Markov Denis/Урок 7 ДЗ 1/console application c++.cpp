//Автор: Мурзин Алексей
//выведите строку в обратном порядке
#include <std_lib_facilities.h>
string foo(std::string str)
{
	string str2;
	int size = str.size() - 1; //убераем последний пробел из строки

	for (int i = size; i >= 0; i--)
	{
		str2 = str2 + str[i];
	}
	return str2;
}
int main() {
	setlocale(LC_ALL, "Russian");

	cout << "введите строку\n";
	string str;
	getline(cin, str);
	str = foo(str);

	cout << str;

	_getch();
	return 0;
}