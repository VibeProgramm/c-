//Автор: Мурзин Алексей
//Измените программу из упр. 8, чтобы она использовала тип douЫe вместо int
//Кроме того, создайте вектор действительных чисел, содержащий N - 1 разносте ме
//ве    чи              вь                      в кт   ап   чат

//Автор: Мурзин Алексей
#include <std_lib_facilities.h>
double sum(vector<double> num)
{
	double sum = 0;
	sort(num.begin(), num.end());
	if (num.back() >= 10000) throw exception("Слишком большие числа\n");
	for (int i = 0; i < num.size(); i++)
	{
		sum += num[i];
	}
	return sum;
}


double n_1(vector<double> n_1)
{
	double min = 0;


	for (int i = 0; i < n_1.size(); i++)
	{
		
		min = n_1[i] - n_1[i - 1];
		return min;
	}
	
}
int main() {
	setlocale(LC_ALL, "Russian");
	vector<double> sum1;
	double temp;
	cout << "Введите вектор\n";

	while (cin >> temp)
	{
		sum1.push_back(temp);
	}
	try
	{
		cout << sum(sum1);
		cout << n_1(sum1);
	}
	catch (const std::exception& ex)
	{
		cout << ex.what();
	}




	_getch();
	return 0;
}