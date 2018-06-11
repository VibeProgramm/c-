//Автор: Мурзин Алексей
//Напишите  программу, предлагающую  пользователю  ввести  три  целых  числа, а затем вывести  их в
//порядке  возрастания, разделяя  запятыми.Например, если пользователь вводит числа 1О 4 6, то
//программа должна вывести на экран числа 4, 6, 1О.Если два числа совпадают, то они должны быть
//упорядочены  одновре­ менно.Например, если пользователь  вводит  числа  4 5 4, то  программа
//должна вывести на экран числа 4, 4, 5.

#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите 3 числа\n";
		int num1, num2, num3; cin >> num1 >> num2 >> num3;
		int min_val = 0, max_val = 0, sum = num1 + num2 + num3;
		min_val = num1;
		if (min_val >= num2)  min_val = num2;
		if (min_val >= num3)  min_val = num3;


		max_val = num1;
		if (max_val <= num2) max_val = num2;
		if (max_val <= num3) max_val = num3;
			
		cout << min_val << ", " << sum - max_val - min_val << ", " << max_val;

	_getch();
	return 0;
}