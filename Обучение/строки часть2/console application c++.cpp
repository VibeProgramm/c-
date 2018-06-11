//Автор: Мурзин Алексей
#include <std_lib_facilities.h>
int main() 
{
	setlocale(LC_ALL, "Russian");
	char str[100];
	char c = '|', c1;
	int index = 0;

	do
	{
		c1 = (char)_getch();
		system("cls");
		if (c1 == 'D' || c1 == 'd')
		{
			for (int i = 0; i <= index; i++)
				if (i != index) str[i] = ' ';
				else str[i] = c;
				str[index + 1] = '\0';
				index++;
		}
		if (c1 == 'A' || c1 == 'a')
		{
			for (int i = 0; i < index; i++)
				if (i != index - 1) str[i] = ' ';
				else str[i] = c;
				str[index + 1] = '\0';
				index--;
		
		}


		cout << str;


	} while (c1 != 'q');
	

		return 0;
	
}