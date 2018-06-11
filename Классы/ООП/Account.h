#pragma once
#include <string>

namespace Program
{
	typedef unsigned int ui;

	class Account
	{
	private:
		std::string ID;
		std::string Name;
		ui Balance;
		const ui Max = 999'999;
	public:
		Account();
		Account(std::string name = "", std::string id = "¹", ui balance = 0);
		void	setID(std::string);
		std::string	getID();
		void	setName(std::string);
		std::string	getName();
		ui		getBalance();
		void	setBalance(ui);
		bool	AddBalance(ui);
		bool	TakeMoney(ui);
		Account MaX(Account &);
		~Account();
		
	};
	


}