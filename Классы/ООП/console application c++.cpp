//Автор: Мурзин Алексей
//Class

#include <std_lib_facilities.h>
#include "Account.h"


using Program::Account;
void Acc()
{
	Account a("Alexey","№123",100'000);
	Account b("Sergey", "№321", 900'000);
	Account c();

	/*a.setBalance(124);
	a.setID("№123");
	a.setName("Alexey");
	*/
	cout << "ID: " << a.getID() << endl;
	cout << "Name: " << a.getName() << endl;
	cout << "Balance: " << a.getBalance() << endl;

	a.AddBalance(19);
	cout << endl;

	cout << "ID: " << a.getID() << endl;
	cout << "Name: " << a.getName() << endl;
	cout << "Balance: " << a.getBalance() << endl;

	a.TakeMoney(19);
	cout << endl;

	cout << "ID: " << a.getID() << endl;
	cout << "Name: " << a.getName() << endl;
	cout << "Balance: " << a.getBalance() << endl;

	cout << endl;

	cout << "ID: " << b.getID() << endl;
	cout << "Name: " << b.getName() << endl;
	cout << "Balance: " << b.getBalance() << endl;

	cout << endl;

	cout << (a.MaX(b)).getBalance();
}

int main()
{
	setlocale(LC_ALL, "Russian");

	
	
	_getch();
	return 0;
}