//Автор: Мурзин Алексей
//создайте колекцию автомабилей через структуры данных. (Придумайте сами все моменты)
#include <std_lib_facilities.h>
struct Auto
{
	char *name;
	int yers;
	int cost;

};
void init(Auto a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << i + 1 << ":\n";
		cout << "Введите марку автомабиля:\n";
		a[i].name = new char[40];
		cin.get();
		cin.getline(a[i].name, 40);

		cout << "Введите год автомабиля:\n";
		while (!(cin >> a[i].yers) || a[i].yers < 1900 || a[i].yers > 2018)
		{
			cout << "Вы ввели неверно год\n\n";
			cout << "Повторите попытку!\n";
		}

		cout << "Введите цену автомабиля в $\n";
		while (!(cin >> a[i].cost) || a[i].cost < 0)
		{
			cout << "Вы ввели неверно цену\n\n";
			cout << "Повторите попытку!\n";
		}
		cout << endl;
	}

}
void ShowAuto(Auto a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << i + 1 << " авто\n";
		cout << "Марка" << a[i].name << endl;
		cout << "Год выпуска автомабиля " << a[i].yers << endl;
		cout << "Цена автомабля " << a[i].cost << endl;
		cout << "------------------------------" << endl;
	}
}
void Free(const Auto a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		delete[] a[i].name;
	}
}
void menu()
{
	cout << "1. Создать колекцию\n";
	cout << "2. Вывести колекцию\n";
	cout << "3. Выход из программы\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "*********Авто***********\n\n\n";

	int N;
	cout << "Введите кол-во автомабилей: "; cin >> N;

	Auto *car = new Auto[N];
	
	char c;
	
	do
	{
		menu();
		cin >> c;
	
		switch (c)
		{
		case '1': system("cls"); init(car, N); break;
		case '2': system("cls"); ShowAuto(car, N); break;
		case '3': return 0; break;
		default: cout << "Неверно выбрано меню!\n" << "Повторите попытку\n"; break;
			
		}

	} while (c != '3');

	Free(car, N);
	delete[] car;
	_getch();
	return 0;
}