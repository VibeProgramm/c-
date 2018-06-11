#include "Account.h"

namespace Program
{

	Account::Account()
	{
		Name = "";
		ID = "¹";
		Balance = 0;
	}
	Account::Account(std::string name, std::string id,ui balance)
	{
		Account::setName(name);
		Account::setID(id);
		Account::setBalance(balance);

	}


	void Account::setID(std::string id)
	{
		ID = id;
	}

	std::string Account::getID()
	{
		return ID;
	}



	void Account::setName(std::string name)
	{
		Name = name;
	}

	std::string Account::getName()
	{
		return Name;
	}




	void Account::setBalance(ui b)
	{
		if (b < Max)
			
		Balance = b;
		else Balance = 0;
	}

	bool Account::AddBalance(ui add)
	{
		if (Balance + add < Max)
		{
			Balance += add;
			return true;
		}
		else return false;
	
	}

	bool Account::TakeMoney(ui take)
	{
		if (take <= Balance)
		{
			Balance -= take;
			return true;
		}
		else return false;
	}

	Account Account::MaX(Account& obj)
	{
		if (Balance < obj.getBalance())
		return obj;
		else return *this;
	}

	ui Account::getBalance()
	{
		return Balance;
	}
	


	Account::~Account()
	{
	}
}