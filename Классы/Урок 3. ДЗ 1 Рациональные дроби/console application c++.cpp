//Автор: Мурзин Алексей
//Создать класс для представление рациональной дроби (m/n, где m и n целые числа


#include <std_lib_facilities.h>
#include "fractions.h"



int main()
{
	setlocale(LC_ALL, "Russian");

	

	fractions::fractions s1(1,2), s2(1,2), s3;

	cout << endl << "++++++++++++" << endl << endl;
	s1.Print();
	cout << endl << endl;

	s2.Print();
	cout << endl << endl;

	s3 = s1 + s2;

	
	s3.Print(); cout << endl << endl;
	/*cout << "s1 nod = " << s1.nod() << endl;
	cout << "s1 nok = " << s1.nok() << endl;

	cout << "s2 nod = " << s2.NOD << endl;
	cout << "s2 nok = " << s2.NOK << endl;

	cout << "s3 nod = " << s3.NOD << endl;
	cout << "s3 nok = " << s3.NOK << endl;*/

	
	_getch();
	return 0;
}