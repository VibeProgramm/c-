//Автор: Мурзин Алексей
//Крестики нолики

#include <std_lib_facilities.h>

char name1[30];
char name2[30];
char table[3][3];	//00 01 02
					//10 11 12
					//20 21 22
bool step;

void instruction()
{
	cout << "\t\t*** Крестики-Нолики***\n\n";
	cout << "Прваила:\n";
	cout << "Игрют 2 игрока на поле 3x3\n";
	cout << "Побеждает тот кто составит выйграшную комбинацию\n";
	cout << "Вид поля:\n\n";
	int l = 0;

	for (int i(0); i < 3; i++)
	{
		for (int j(0); j < 3; j++)
		{
			cout << "| " << l + 1 << ' ';
			table[i][j] = char(49 + l);
			l++;
		}
		cout << '|';
		cout << endl;
	}

	cout << "\nДля хода нажмите цифру ячейки поля\n";
	cout << "Для начала игры нажмите клавишу:";
	_getch();
}
bool input()
{
	for (int i(0); i < 3; i++)
	{
		for (int j(0); j < 3; j++)
		{
			cout << "| " << table[i][j] << ' ';
		}
		cout << '|';
		cout << endl;
	}

	cout << endl;
	if (step)
		cout << "Ходит " << name1 << " : ";
	else cout << "Ходит " << name2 << " : ";

	int n;
	cin >> n;
	if (n < 1 || n > 9)
		return false;
	int i, j;

	if (n % 3 == 0)
	{
		i = n / 3 - 1;
		j = 2;
	}
	else
	{
		j = n % 3 - 1;
		i = n / 3;
	}

	if (table[i][j] == 'O' || table[i][j] == 'X')
		return false;

	if (step)
	{
		table[i][j] = 'X';
		step = false;
	}
	else { table[i][j] = 'O'; step = true; }
	return true;
}
bool win()
{
	for (int i(0); i < 3; i++)
		if ((table[i][0] == table[i][1]) && (table[i][0] == table[i][2]))
			return true;

		else
			if ((table[0][i] == table[1][i]) && (table[0][i] == table[2][i]))
				return true;

			else if ((table[0][0] == table[1][1] && table[0][0] == table[2][2]) || (table[0][2] == table[1][1] && table[0][2] == table[2][0]))
				return true;


	return false;
}

int main()
{
	setlocale(LC_ALL, "Russian");


	instruction();
	system("cls");

	int i = 0;

	cout << "Введите имя 1 игрока: ";
	cin.getline(name1, 30);
	cout << "Введите имя 2 игрока: ";
	cin.getline(name2, 30);

	srand(time(NULL));
	if (rand() & 1)//
		step = true;
	else step = false;

	while (!win())
	{
		if (i == 9)
		{
			cout << "Ничья!!";
			_getch();
			return -1;
		}
		system("cls");
		if (!input())
		{
			cout << "Вы ввели неверные данные повторите!";
			_getch();
		}
		i++;
	}

	system("cls");
	if (step)
		cout << "Победил " << name2 << endl;
	else cout << "Победил " << name1 << endl;



	_getch();
	return 0;
}
