//Автор: Мурзин Алексей
//Создайте   вектор, хранящий   десять   строковых   значений   O zero•, 0   one •, ...,
//•nine•.Введите  их  в  программу, преобразующую  цифру  в  соответствующее строковое
//представление; например, при  вводе цифры  7 на экран  должна  быть
//выведена  строка  seven.С помощью  этой  же  программы, используя  тот же са­ мый  цикл  ввода,
//преобразуйте  строковое  представление  цифры  в числовое;  на­ пример, при вводе строки seven на
//экран должна быть выведена цифра 7.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	char programmV = '2';


	if (programmV == '1')
	{
		string number_to_s;
		char chouse = 'y';

		while (chouse == 'y')
		{


			cout << "Введите число по буквам или цифрами от 0 до 10\nПример nine = 9\n";
			cin >> number_to_s;


			if (number_to_s == "zero") cout << "0\n";
			else if (number_to_s == "one") cout << "1\n";
			else if (number_to_s == "two") cout << "2\n";
			else if (number_to_s == "three") cout << "3\n";
			else if (number_to_s == "four") cout << "4\n";
			else if (number_to_s == "five") cout << "5\n";
			else if (number_to_s == "six") cout << "6\n";
			else if (number_to_s == "seven") cout << "7\n";
			else if (number_to_s == "eight ") cout << "8\n";
			else if (number_to_s == "nine") cout << "9\n";
			else if (number_to_s == "ten") cout << "10\n";
			else if (number_to_s == "0") cout << "zero\n";
			else if (number_to_s == "1") cout << "one\n";
			else if (number_to_s == "2") cout << "two\n";
			else if (number_to_s == "3") cout << "three\n";
			else if (number_to_s == "4") cout << "four\n";
			else if (number_to_s == "5") cout << "five\n";
			else if (number_to_s == "6") cout << "six\n";
			else if (number_to_s == "7") cout << "seven\n";
			else if (number_to_s == "8") cout << "eight\n";
			else if (number_to_s == "9") cout << "nine\n";
			else if (number_to_s == "10") cout << "ten\n";
			else cout << "Неверно введиты данные\n";

			cout << "Продолжить ?(y/n)\n";
			cin >> chouse;
		}
	}

	if (programmV == '2')
	{
		vector <string> str_val(22);


		str_val[0] = "zero"; str_val[0] = "0";
		str_val[1] = "one"; str_val[0] = "1";
		str_val[2] = "two"; str_val[0] = "2";
		str_val[3] = "three"; str_val[0] = "3";
		str_val[4] = "four"; str_val[0] = "4";
		str_val[5] = "five"; str_val[0] = "5";
		str_val[6] = "six"; str_val[0] = "6";
		str_val[7] = "seven"; str_val[0] = "7";
		str_val[8] = "eight"; str_val[0] = "8";
		str_val[9] = "nine"; str_val[0] = "9";
		str_val[10] = "ten"; str_val[0] = "10";


		int num;
		char chose = 'y';

		while (chose == 'y')
		{
			cout << "Введите число по буквам или цифрами от 0 до 10\nПример nine = 9\n";
			cin >> num;

			for (int i = 0; i < str_val.size(); i++)
			{
				if (num == i) cout << str_val[i] << endl;

			}


			do
			{
				cout << "Продолжить ?(y/n)\n";
				cin >> chose;
			} while (chose != 'n' && chose != 'y');



		}
	}
	cout << "Преобразование завершенно\n";


	_getch();
	return 0;
}