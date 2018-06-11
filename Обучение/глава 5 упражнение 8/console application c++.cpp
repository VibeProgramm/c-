//Автор: Мурзин Алексей
#include <std_lib_facilities.h>
int sum(vector<int> num)
{
	int sum = 0;
	sort(num.begin(), num.end());
	if (num.back() >= 100) throw exception("Слишком большие числа\b");
	for (int i = 0; i < num.size(); i++)
	{
		sum += num[i];
	}
	return sum;
}
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> sum1;
	int temp;
	cout << "Введите вектор\n";

	while (cin >> temp)
	{
		sum1.push_back(temp);
	}
	try
	{
		cout << sum(sum1);
	}
	catch (const std::exception& ex)
	{
		cout << ex.what();
	}
	
	


	_getch();
	return 0;
}