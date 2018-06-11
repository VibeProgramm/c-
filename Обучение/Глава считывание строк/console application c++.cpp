//Автор: Мурзин Алексей
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int number_of_words = 0;
	string previous = " "; // не слово
	string current;
	while (cin >> current)
	{
		++number_of_words; //увеличиваем сченчик слов
		if (previous == current)
			cout << "количество слов: " << number_of_words << " повторееся: "
			<< current << endl;
		previous = current;
	}
	_getch();
	return 0;
}
