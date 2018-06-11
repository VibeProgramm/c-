//Автор: Мурзин Алексей
//динамический массив
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");

	/*int a = 0;
	double b = 0;
	cout << "A = " << a << "(0x" << &a << ")\n";
	cout << "B = " << b << "(0x" << &b << ")\n\n\n";
	int ab[16];
	
	for (int i = 0; i < 16; i++)
	{
		cout << "A[" << i << "]" << " = " " [" << &ab[i] << "]\n";
	}*/
	int n;
	cout << "Введите кол-во элементов в массиве:\n";
	cin >> n;
	int *p = new int[n];

	for (int i = 0; i < n; i++)
	{
		*(p + i) = i + 1;
		cout << "p[" << i << "]" << p[i] << endl;
	}

	delete [] p;
	_getch();
	return 0;
}