#include "fractions_2.h"

namespace Program
{
	int fractions_2::nod(int a, int b)
	{
		if (b == 0) return a;
		return nod(b, a % b);
	}
	int fractions_2::nok(int a, int b)
	{
		return a * b / nod(a, b);
	}
	fractions_2::fractions_2()
	{
	}

	fractions_2::fractions_2(int num, int denum)
	{
		set_num(num);
		set_denum(denum);
	}

	void fractions_2::set_num(int NUM)
	{
		num = NUM;
	}

	int fractions_2::get_num()
	{
		return num;
	}

	void fractions_2::set_denum(int DENUM)
	{
		denum = DENUM;
	}

	int fractions_2::get_denum()
	{
		return denum;
	}

	void fractions_2::set_num_denum(int NUM, int DENUM)
	{
		set_num(NUM);
		set_denum(DENUM);
	}

	void fractions_2::Print()
	{
		int n = num;
		int m = denum;

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
		
		if (m != 1)
		std::cout << n << std::endl << hyphen << std::endl << m << std::endl;
		else
			std::cout << n << std::endl;
	}

	void fractions_2::overturn()
	{
		std::swap(num, denum);
	}

	fractions_2 fractions_2::operator+(fractions_2 & f2)
	{
		int NOK = nok(denum, f2.denum);

		multiplier = num * (NOK / denum);
		f2.multiplier = f2.num * (NOK / f2.denum);

		fractions_2 res;

		res.num = multiplier + f2.multiplier;
		res.denum = NOK;

		return res;

	}

	fractions_2 fractions_2::operator-(fractions_2 & f2)
	{
		int NOK = nok(denum, f2.denum);

		multiplier = num * (NOK / denum);
		f2.multiplier = f2.num * (NOK / f2.denum);

		fractions_2 res;

		res.num = multiplier - f2.multiplier;
		res.denum = NOK;

		return res;

	}

	fractions_2 fractions_2::operator*(fractions_2 & f2)
	{
		fractions_2 res;
		res.num = num * f2.num;
		res.denum = denum * f2.denum;
		return res;
	}

	fractions_2 fractions_2::operator/(fractions_2 & f2)
	{
		fractions_2 res;
		std::swap(f2.num, f2.denum);
		res = *this * f2;
		return res;
	}

	bool fractions_2::operator==(fractions_2 &d1)
	{
		if (d1.num == num && d1.denum == denum)
			return true;
		else return false;
	}




	bool fractions_2::reduction()
	{
		int NOD = nod(num, denum);
		if (NOD == 1) return false;

		num = num / NOD;
		denum = denum / NOD;
		return true;
	}

	fractions_2::~fractions_2()
	{
	}

	std::ostream & operator<<(std::ostream & os, fractions_2 & d1)
	{
		if (d1.denum == 1)
			os << d1.num;
		else
		os << d1.num << "\\" << d1.denum;
		
		return os;
	}

}