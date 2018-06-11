//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>
#include "queue.h"

using Program::queue;

int main()
{
	setlocale(LC_ALL, "Russian");
	

	queue a(4);

	for (int i = 0; i < 4; i++)
	{
		a.Push(i + 1);
	}
	
	for (int i = 0; i < 4; i++)
	{
		cout << a.Pop() << endl;
	}
	cout << endl << endl << "Пример обработки ошибок\n\n";
	cout << "a.Push(5)\na.Push(6)\n\n";
	a.Push(5);
	a.Push(6);
	cout << a.Pop() << endl << a.Pop() << endl;

	_getch();
	return 0;
}