//Автор: Мурзин Алексей
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");


	// простой словарь: список упорядоченных слов
	cout << "Словарь с упорядочением слов по алфавиту" << endl;
	vector <string> words; string temp;


		while (cin >> temp)   // считываем слова, отделенные разделителями
			words.push_back(temp);        // заносим в вектор
		cout <<  "количество слов : " << words.size() << endl; sort(words.begin(), words.end()); // сортируем весь вектор

			for (int i =0; i< words.size(); ++i)
				if (i == 0  ||    words[i - 1] != words[i]) // это новое слово?
					cout << words[i] <<  "\n";
	
			_getch();
	return 0;
}