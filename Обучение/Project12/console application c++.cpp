//Автор: Мурзин Алексей
//Напишите программу, в которую сначала вводится набор пар, состоящих из имени
//и  значения, например  Joe      17   и Barbara    22.  Для  каждой  пары  занесите  имя в вектор
//names, а число - в вектор scores(в соответствующие позиции, так что если  names[7] == " J o e 
//	0, то  scores[7] == 17).Прекратите   ввод, введя   строку No  more(т.е.следующая
//		попытка ввести целое число завершится ошибкой).Убе­ дитесь, что  каждое  имя уникально, и
//	выведите  сообщение  об  ошибке, если имя введено дважды.Выведите на печать все пары(имя, баллы)
//	по одной в строке.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите имя и дату\n";
	vector <string> names; string temp1;
	vector <int> scores; int temp2;
	char chouse = 'y';
	bool repeat_word = false;


	while (chouse == 'y')
	{
		cin >> temp1 >> temp2;

		names.push_back(temp1); scores.push_back(temp2);
		do
		{
			cout << "Продолжить ввод даных ?(y/n)";
				cin >> chouse;

		} while (chouse !='y' && chouse != 'n');
	}

	

	for (int i = 0; i < names.size(); i++)
	{
		if (i == 0 || names[i] != names[i - 1])
		{
			cout << names[i] << " " << scores[i] << endl;
			
		}
		else  repeat_word = true;
	}


	if (repeat_word == true) cout << "Удаленны повторяющиеся слова\n";
	_getch();
	return 0;
}