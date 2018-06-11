//Автор: Мурзин Алексей
//Найти Y, если Y = X1 + X2 + … + Xn,   X = Z^3 - B + A^2 / tg^2?. Количество X вводятся 
//пользователем программы. Для каждого X значения Z, B, А, ? разные 
//(вводятся пользователем программы).

#include <std_lib_facilities.h>
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите количество иксов: ";
	int count_n; cin >> count_n;

	int *ptrn = new int[count_n];
	double *ptr_Z = new double[count_n];
	double *ptr_B = new double[count_n];
	double *ptr_A = new double[count_n];
	double *ptr_Be = new double[count_n];
	/*for (int i = 0; i < count_n; i++)
	{
		ptrn[i] = rand() % 10 + 1;
		cout << ptrn[i] << "\t";
	}*/
	
	for (int i = 0; i < count_n; i++)
	{
		cout << "Введите значение Z, B , A , Betta для X" << i+1 << ":" << endl;
		cout << "Z = "; cin >> ptr_Z[i];
		cout << "B = "; cin >> ptr_B[i];
		cout << "A = "; cin >> ptr_A[i];
		cout << "Betta = "; cin >> ptr_Be[i];

	}
	
	//double X, Y;
	//X = (*ptr_Z)*(*ptr_Z)*(*ptr_Z); //Z^3
	//cout << X << "\n\n\n";
	double X = 0, Y = 0;
	for (int i = 0; i < count_n; i++)
	{
		// формула нахождения икса
		X = pow(ptr_Z[i], 3) - ptr_B[i] + pow(ptr_A[i], 2) / pow(tan(ptr_Be[i]), 2); 
		Y += X; // суммируем иксы
	}
	delete[] ptr_Z;
	delete[] ptr_B;
	delete[] ptr_A;
	delete[] ptr_Be;

	cout << endl << "Y = " << Y;
	



	_getch();
	return 0;
}