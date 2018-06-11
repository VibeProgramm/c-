//Автор: Мурзин Алексей
//Измените программу из упр. 19 так, чтобы при вводе имени она выводила соот­
//ветствующее количество баллов или сообщение "name   not found".

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	vector <string> names(5); string temp1;
	vector <int> scores(5); int temp2;
	char chouse = 'y';
	bool repeat_word = false;

	{
		names[0] = "JONE";
		names[1] = "OLIVER";
		names[2] = "JACK";
		names[3] = "HARRY";
		names[4] = "OSCAR ";
	}
	{
		scores[0] = 10;
		scores[1] = 10;
		scores[2] = 30;
		scores[3] = 40;
		scores[4] = 50;
	}


	while (chouse == 'y')
	{
		cout << "Введите имя\n";
		cin >> temp1;
		for (int i = 0; i < names.size(); i++)
		{
			if (temp1 == names[i]) cout << names[i] << " " << scores[i] << endl;
			

		}
		do
		{
			cout << "Продолжить ввод даных ?(y/n)";
			cin >> chouse;

		} while (chouse != 'y' && chouse != 'n');
	}


	_getch();
	return 0;
}