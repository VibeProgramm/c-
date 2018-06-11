//Автор: Мурзин Алексей
// выполнить умножения матрицы 3*3
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите размер матрицы: "; cin >> n;

	//создаем 3 динамических масива [n][n]
	
		int **m1 = new int*[n];
		for (int i = 0; i < n; i++)
			m1[i] = new int[n];


		int **m2 = new int*[n];
		for (int i = 0; i < n; i++)
			m2[i] = new int[n];


		int **m3 = new int*[n];
		for (int i = 0; i < n; i++)
			m3[i] = new int[n];
	
//////////////////////////////////////////	

	//cin matrix 1

	cout << "Введите первую матрицу\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> m1[i][j];
			m3[i][j] = 0; //обнулюем 3 матрицу
		}
	}
	system("cls");

	

	//cin matrix 2

	cout << "Введите вторую матрицу\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> m2[i][j];

		}
	}
	system("cls");

	//calculation m3[i][j] += m1[i][m] * m2[m][j]

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int m = 0; m < n; m++)
			{
				m3[i][j] += m1[i][m] * m2[m][j];
			}

		}
	}

	//cout
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << m3[i][j] << " ";
		}
		cout << endl;
	}

	//удаляем 3 матрицы
	
		for (int i = 0; i < n; i++)
			delete[] m1[i];
		delete[] m1;

		for (int i = 0; i < n; i++)
			delete[] m2[i];
		delete[] m2;

		for (int i = 0; i < n; i++)
			delete[] m3[i];
		delete[] m3;

	/////////////////////////

	_getch();
	return 0;
}