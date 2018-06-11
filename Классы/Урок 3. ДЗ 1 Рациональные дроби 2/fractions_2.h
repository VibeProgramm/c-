#pragma once
#include <iostream>
#include <string>


namespace Program
{

	class fractions_2
	{
	private:
		int num;
		int denum;
		int nod(int a, int b);
		int nok(int a, int b);
		int multiplier;
		
	public:
		fractions_2();
		fractions_2(int, int = 1);


		void set_num(int);
		int get_num();
		void set_denum(int);
		int get_denum();
		void set_num_denum(int, int = 1);

		void Print();
		

		void overturn();

		fractions_2 operator + (fractions_2&);
		fractions_2 operator - (fractions_2&);
		fractions_2 operator * (fractions_2&);
		fractions_2 operator / (fractions_2&);
		bool operator == (fractions_2&);
	

	
		bool reduction();
		
		friend std::ostream& operator<<(std::ostream& os, fractions_2& d1);


		~fractions_2();
	};


}