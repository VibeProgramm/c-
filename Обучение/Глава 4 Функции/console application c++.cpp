//Автор: Мурзин Алексей
//Реализуйте  функцию  square(), не  используя  оператор  умножения;  иначе  говоря, выполните
//умножение  х•х   с  помощью  повторного  сложения(начиная  с  перемен­ ной, равной нулю, их  раз
//	добавляя к ней число х).Затем выполните  версию первой программы, используя функцию square() .

#include <std_lib_facilities.h>
int square_plus(int x)
{
	int ans = 0;
	for (int i = 0; i<x; ++i)
	{
		ans += x;
	}
	return ans;
}

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Введите число\n"; int num; cin >> num;

	cout << num << " = " << square_plus(num);

	_getch();
	return 0;
}