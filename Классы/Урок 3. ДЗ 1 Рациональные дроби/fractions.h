#pragma once
#include <iostream>
#include <string>

namespace fractions
{

	class fractions
	{
	private:
		enum drob
		{
			numerator, denominator, two

		};
		int m;
		int n;

		

	public:
		fractions();
		fractions(int, int);

		void set_n(int);
		void set_m(int);
		int get_n();
		int get_m();

		int nod(int a, int b) {
			if (b == 0)
				return a;

			return nod(b, a % b);
		}

		int nok(int a, int b)
		{
			return a * b / nod(a, b);
		}
			

		void Print();
		void overturn();
		void minus(int&, int&, drob abs = two);
		
		//математические операции
		fractions operator + ( fractions &fac)
		{
			int NOK;
			int NOD;

			fractions res;
			if (n == fac.n)
				NOK = n;
			else
			
				NOK = nok(n, fac.n);

			m = m * (NOK / n);
			fac.m = fac.m * (NOK / fac.n);

			res.m = m + fac.m;
			res.n = NOK;

			return res;

			
		

		}
		

		~fractions();
	};

}