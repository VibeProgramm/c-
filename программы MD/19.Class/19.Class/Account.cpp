#include "Account.h"

namespace Program
{


	Account::Account(void)
	{
		Name = "";
		ID = "¹0";
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
}