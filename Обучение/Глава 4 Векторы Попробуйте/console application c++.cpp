//Автор: Мурзин Алексей
//Напишите  программу, заглушающую  нежелательные  слова; иначе говоря, считайте
//слова из потока cin и выведите их в поток cout, заменив нежелательные слова сло­ вом BLEEP.
//Начните с одного нежелательного слова, например
//string disliked = "Broccoli";
//Когда отладите программу, добавьте еще несколько нежелательных слов.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector<string> words; string temp;
	
	
	while (cin >> temp) words.push_back(temp);
	
	cout << "Кол-во слов в словаре " << words.size() << endl; 
	sort(words.begin(), words.end()); // сортируем по алфавиту
	
	
	for (int i = 0; i < words.size(); i++)
	{
		if (i == 0 || words[i - 1] != words[i]) // проверяем новое ли это слово

		{
			if (words[i] != "broccoli" && words[i] != "cucumber") //проверяем равно ли слово "запрещенному". То есть когда нет этих слов ("запрещеных"), то программа выводет текущее слово на экран. Тоесть не равно, ни тому ни другому

				cout << words[i] << endl; 
			else cout << "Bleep" << endl; //если да то выводим слово "Bleep"
		
		}
	}
	

	_getch();
	return 0;
}