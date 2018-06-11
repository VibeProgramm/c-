/*//////////////////////////////////////////////
	Автор - Марков Денис					////
	Наследование							////
*///////////////////////////////////////////////

#include <iostream>
#include <conio.h>
#include "figura.h"

using namespace std;

typedef unsigned int ui;

class Account
	{
	private:
		char* ID;
		char* Name;
		ui Balance;
		ui Max;
	public:
		Account(void);
		Account(char* id, char* name="", ui balnce=0);
		void	setID(char*);
		char*	getID();
		void	setName(char*);
		char*	getName();
		ui		getBalance();
		void	setBalance(ui);
		virtual void    AddBalance(ui);
		virtual void    TakeMoney(ui);
		Account MAX(Account&);

		~Account(void);
	};

	Account::Account(void)
	{
		Name = "";
		ID = "№0";
		Balance = 0;
		Max = 99999;
	}

	Account::Account(char* id, char* name, ui balnce)
	{
		Max = 99999;
		ID = id;
		Name = name;
		if(balnce < Max)
			Balance = balnce;
		else Balance = 0;
	}

	Account::~Account(void)
	{
	}

	void Account::setID(char* id)
	{
		ID = id;
	}

	char* Account::getID()
	{
		return ID;
	}

	void Account::setName(char *name)
	{
		Name = name;
	}

	char* Account::getName()
	{
		return Name;
	}

	ui Account::getBalance()
	{
		return Balance;
	}

	void Account::setBalance(ui b)
	{
		if(b < Max)
			Balance = b;
		else Balance = 0;
	}

	void  Account::AddBalance(ui add)
	{
		if(Balance + add < Max)
			Balance += add;
		else Balance = Balance;
	}

	void    Account::TakeMoney(ui take)
	{
		if(take <= Balance)
			Balance -= take;
	}

	Account Account::MAX(Account& obj)
	{
		if(Balance < obj.getBalance())
		{
			return obj;
		}
		else return *this;
	
	}


	class ExtraAccount : public Account
	{
	private:
		const int Over;
		double doubt;
	public:
		ExtraAccount():doubt(0),Over(20000), Account()
		{
			
		};
		
		ExtraAccount(char* id, char* name, ui balnce): Account(id,name,balnce),Over(20000),doubt(0){};
		
		virtual void TakeMoney(ui Sum)
		{
			if(doubt > 0.0)
			{
				return ;
			}
			if(Sum < Account::getBalance())
			{
				Account::TakeMoney(Sum);
				return ;
			}

			if(Sum - Account::getBalance() <= Over)
			{
				doubt = Sum - Account::getBalance() + ((Sum - Account::getBalance())*0.15); 
				Account::setBalance(0);
				return;
			}

			return;
		}

		virtual void AddBalance(ui Sum)
		{
			if(doubt == 0)
			{
				Account::AddBalance(Sum);
				return;
			}
			else
			{
				if(Sum < doubt)
				{
					doubt -= Sum;
					return;
				}
				else
				{
					Account::setBalance(Sum - doubt);
					doubt = 0;
				}
			}
		
		}

		friend ostream& operator<<(ostream& os, ExtraAccount& ex)
		{
			os << "Баланс: " << ex.getBalance() << endl;
			os << "Долг: " << ex.doubt << endl;
			return os;
		}
	};


int main(int argc, char** argv)
{
	setlocale(LC_ALL , "Russian");

	ExtraAccount ea("14255","Denis",1000);
	Account a("14254325","Alex",1000);

	Account **pa = new Account*[2];

	pa[0] = &ea;
	pa[1] = &a;
	

	pa[0]->TakeMoney(5000);
	pa[1]->TakeMoney(5000);

	cout << pa[0]->getBalance() << endl;
	cout << pa[1]->getBalance();


	_getch();
	return 0;
}
