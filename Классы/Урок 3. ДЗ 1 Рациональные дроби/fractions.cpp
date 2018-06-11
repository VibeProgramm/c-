#include "fractions.h"

namespace fractions
{

	fractions::fractions()
	{
	}

	fractions::fractions(int val_n, int val_m)
	{
		n = val_n;
		m = val_m;
	}

	void fractions::set_n(int val)
	{
		n = val;
	}

	void fractions::set_m(int val)
	{
		m = val;
	}

	int fractions::get_n()
	{
		return n;
	}

	int fractions::get_m()
	{
		return m;
	}

	void fractions::Print()
	{
		int max = n >= m ? max = n : max = m;
		std::string hyphen = "";
		
		bool exit = false;
		int sum = 9;
		int size = 1;
		while (!exit)
		{
			if (sum >= max)
			{
				for (int i = 0; i < size; i++)
				
				hyphen += "-";
				exit = true;
			}
			sum = sum * 10 + 9;
			size++;

		}
		std::cout << n << std::endl << hyphen << std::endl << m;
	}

	void fractions::overturn()
	{
		std::swap(n, m);
	}


	fractions::~fractions()
	{
	}

}