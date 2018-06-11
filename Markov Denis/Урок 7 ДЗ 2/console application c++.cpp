//Автор: Мурзин Алексей
// подсчитать кол-во символов 'b' в слове
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");

	string str;
	cout << "Введите строку:\n";
	getline(cin, str);

	int num_words(0);
	bool in_word = false;
	int num_b = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]) && !(in_word))

		{
			num_words++;
			in_word = true;
			if (str[i] == 'b' || str[i] == 'B') num_b++;
		}
		else if (!(isalpha(str[i]))) in_word = false;
	}

	cout << num_words << " Слов(а)" << endl << num_b << " Символов b" ;

	_getch();
	return 0;
}