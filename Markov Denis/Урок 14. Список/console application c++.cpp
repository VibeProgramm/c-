//јвтор: ћурзин јлексей
//—писк - это динамический масив данных

#include <std_lib_facilities.h>

struct A
{
	int key;
};

struct List
{
	A a;
	List *next;
};
void Print(List *b)
{
	List *print = b;

	while (print)
	{
		cout << print->a.key << " -> ";
		print = print->next;
	}
	cout << "NULL\n";
}
void Init(List **begin)
{
	*begin = new List;

	A a[5] = { 1,2,3,4,100 };

	(*begin)->a.key = 20;
	(*begin)->next = NULL;

	List *end = *begin; // указатель на конец

	for (int i = 0; i < 5; i++)
	{
		end->next = new List;
		end = end->next;
		end->a = a[i];
		end->next = NULL;
	}
}
void Add_begin(List **begin, const A &a)
{
	List* t = new List;
	t->a = a;
	t->next = *begin;
	*begin = t;

}
void Add_end(List **begin, const A &val)
{
	List *p = *begin; //находит конец
	List *t = new List; //вставл€емый список
	t->a = val; //вставл€емое значение
	t->next = NULL;

	while (true)
	{
		if (p->next == NULL)
		{
			p->next = t;
			break;
		}

		p = p->next; //"итераци€" по списку
	}

	
	
}
void Insert(List **begin, const A &a)
{
	List *ins = new List;
	ins->a = a;

	if (begin == NULL) //если списак пуст вставл€ем вначало
	{
		ins->next = NULL;
		*begin = ins;
		return;
	}

	List* t = *begin;

	if (t->a.key >= ins->a.key) // если первый элемент больше чем вставл€емый, то вставл€ем в начало
	{
		ins->next = t;
		*begin = ins;
		return;
	}

	List *t1 = t->next;

	while (t1)
	{
		if (t->a.key < ins->a.key && ins->a.key <= t1->a.key)
		{
			t->next = ins;
			ins->next = t1;
			return;
		}
		t = t1;
		t1 = t1->next;
	}


	t->next = ins;
	ins->next = NULL;
}
void Delete(List **begin, const A &a)
{
	if (*begin == NULL)
	{
		return;
	}

	List *t = *begin;
	if (t->a.key == a.key)
	{
		*begin = t->next;
		delete t;
		return;
	}
		List* t1 = *begin;
		
		
			while (t1)
			{
				if (t1->a.key == a.key)
				{
					t->next = t1->next;
					delete t1;
					return;
				}

				t = t1;
				t1 = t1->next;
			}

		
	
}
void Free(List **begin)
{
	if (*begin == NULL) return;
	List *p = *begin;
	List *t;

	while (p)
	{
		t = p;
		p = p->next;
		delete t;
	}
	*begin = NULL;
}
int main()
{
	setlocale(LC_ALL, "Russian");

	List* begin = NULL;
	A a = { -12 }, b = { 4 };
	
	Init(&begin);
	Print(begin);
	Insert(&begin, a);
	Print(begin);
	Delete(&begin, b);
	Print(begin);
	Add_begin(&begin, a);
	Print(begin);
	Free(&begin);
	
	_getch();
	return 0;
}