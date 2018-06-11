//Автор: Мурзин Алексей
// выполнить умножения матрицы 3*3
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");

	const int n = 3;
	int m1[n][n];
	int m2[n][n];
	int m3[n][n];


	cout << "Введите первую матрицу\n";

	//cin matrix 1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> m1[i][j];
			m3[i][j] = 0; //обнулюем 3 матрицу
		}
	}
	system("cls");
	
	cout << "Введите вторую матрицу\n";

	//cin matrix 2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> m2[i][j];
			
		}
	}
	system("cls");

//calculation
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
	


	_getch();
	return 0;
}