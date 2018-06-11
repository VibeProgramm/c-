//Автор: Мурзин Алексей


#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");


	int lower = 1;
	int upper = 100;
	int middle;

	char answer;
	cout << "Эта программа угадает за 7 вопросов Какое число вы иммели ввиду в диапозоне от 1 до 100\n";

	while (upper > lower)
	{
		middle = (upper + lower) / 2;
		//проверяем вводимые знаки
		do {
			cout << "Ваше число меньше или равно " << middle << " ?(y/n)\n";
			cin >> answer;
		} while (answer != 'y' && answer != 'n');


		if (answer == 'y') upper = middle;
		else lower = middle + 1;

		cout << "[ " << lower << " ]:[ " << upper << " ]\n" ;
	}
	cout << "Ваше число " << upper;
	_getch();
	return 0;
}