//јвтор: ћурзин јлексей
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int M, N;
	cout << "Enter M,N\n";
	cin >> M >> N;
	
	//создаем указатель на указатель (создаем динамический двумерный массив
	int **p = new int*[N];
	for (int i = 0; i < N; i++)
		p[i] = new int[M];
	

	//выводим массив
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			p[i][j] = 0;
			cout << p[i][j] << ' ';

		}
		cout << endl;
	}


	//удал€ем динамический двумерный массив
	for (int i = 0; i < N; i++)
		delete[] p[i];
	delete[] p;

	_getch();
	return 0;
}