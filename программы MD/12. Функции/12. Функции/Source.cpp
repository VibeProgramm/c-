/*////////////////////////////////////////
Автор - Марков Денис					//
Аргументы функции						//
*/////////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

double Calc(double a, double b, double (*oper)(double,double))
{

	return (*oper)(a,b);
}

double Sum(double a, double b)
{
	return a+b;
}

double Sub(double a, double b)
{
	return a-b;
}

double Mult(double a, double b)
{
	return a*b;
}

void SortBubble(int a[], int n)
{
	int temp; 
    for ( int i = 0 ; i < n - 2 ; i++)
    {
        for (int j = 0 ; j < n - 1 ; j++)
        {
            if ( a[j] > a[j + 1] )
            {
                temp = a[j];
                a[j]=a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

}

void PrintArray(const int a[], int n)
{
	for(int i(0); i < n; i++)
			cout << "a [ " << i << "] =  " << a[i] << endl;
}

void String(char *str, const char *str2)
{
	int i(0);
	int j(0);


	while(1)
	{
		if(str[i] != '\0')
		{
			i++;
			continue;
		}

		if(str2[j] != '\0')
		{
			str[i] = str2[j];
			i++;j++;
		}
		else {str[i] = '\0'; return;}
	}


}


int main()
{
	setlocale(LC_ALL , "Russian");

	int ar[5] = {412,354,4,6,2};
	cout << "Исходный массив:\n\n";
	PrintArray(ar,5);
	SortBubble(ar,5);
	cout << "\n\nОтсортированный массив:\n\n";
	PrintArray(ar,5);

	char str1[80] = "Hello ";
	char str2[10] = "world!";

	String(str1,str2);
	

	cout << str1 << endl;

	_getch();
	return 0;
}