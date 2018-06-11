//Автор: Мурзин Алексей
// Стэк
#include <std_lib_facilities.h>

struct Stek
{
	int key;
	Stek* next;
};

void Print(Stek *b)
{
	Stek *print = b;

	while (print)
	{
		cout << print->key << " -> ";
		print = print->next;
	}
	cout << "NULL\n";
}

void push(Stek**next, int d)
{
	Stek *pv = new Stek;      // объ¤вл¤ем новую динамическую переменную типа stek
	pv->key = d;                // записываем  значение, которое помещаетс¤ в стек
	pv->next = *next;          // св¤зываем новый элемент стека с предыдущим
	*next = pv;                // новый элемент стека становитс¤ его вершиной
}

int pop(Stek **next)
{
	int temp = (*next)->key;		// извлекаем в переменную temp значение в вершине стека
	Stek *pv = (*next);				// запоминаем указатель на вершину стека, чтобы затем
									// освободить выделенную под него пам¤ть
	(*next) = (*next)->next;      // вершиной становитс¤ предшествующий top элемент
	delete pv;					 // освобождаем пам¤ть, тем самым удалили вершину
	return temp;				// возвращаем значение, которое было в вершине
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Stek* begin = NULL;

	for (int i(0); i < 4; i++)
	{
		push(&begin, i + 1);
	}

	Print(begin);
	cout << endl;
	for (int i(0); i < 4; i++)
	{
		cout << pop(&begin) << '\n';
	}


	_getch();
	return 0;
}