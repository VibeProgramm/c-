//Автор: Мурзин Алексей
//Напишите функцию соединяющию строки
#include <std_lib_facilities.h>

string strsum(string str1, string str2, string (*oper)(string,string))
{
	return (*oper)(str1, str2); //выззываем указатель на функциюю
}
string sum(string str1, string str2)
{
	return str1 + str2;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	string str1 = "Hello ";
	string str2 = "Word";

	
	
	cout << strsum(str1,str2,sum) << endl;
	_getch();
	return 0;
}