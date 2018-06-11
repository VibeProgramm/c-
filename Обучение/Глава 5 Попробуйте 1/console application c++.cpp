//Автор: Мурзин Алексей
#include <std_lib_facilities.h>


int main() 
		
{
	setlocale(LC_ALL, "Russian");


	vector<double> temps; // температуры
	double temp = 0;
	double sum = 0;
	while (cin >> temp)     // считываем и записываем в вектор temps
		temps.push_back(temp);
	double high_temp = temps[0]; double low_temp = temps[0];
	for (int i = 0; i<temps.size(); ++i)
	{


		if (temps[i] >   high_temp) high_temp = temps[i]; // находим
														  // максимум
		if (temps[i] <   low_temp) low_temp = temps[i];   // находим
														  // миниму

		sum += temps[i]; // вычисляем сумму
	}




	cout << "максимапьная температура " << high_temp << endl;
	cout << "минимальное температура " << low_temp << endl;
	cout << "средняя температура " << sum / temps.size();

	

	_getch();
	return 0;
}

