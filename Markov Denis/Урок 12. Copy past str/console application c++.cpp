//Автор: Мурзин Алексей
//Copy past str
#include <std_lib_facilities.h>
void Getline(char *str)
{
	int i = 0;
	char c;
	cin.get(c);


	while (c != '\n')
	{
		str[i] = c;
		i++;
		cin.get(c);
		
	}
	str[i] = '\0';
}
int main()
{
	setlocale(LC_ALL, "Russian");

	
	char str1[100];
	Getline(str1);
	cout  << str1;


	
	_getch();
	return 0;
}