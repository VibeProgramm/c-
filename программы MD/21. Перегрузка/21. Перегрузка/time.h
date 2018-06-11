#pragma once
#include <iostream>
#include <cmath>
#include <stdexcept>

typedef unsigned int ui;
class time
{
private:
	ui seconds;
	ui minutes;
	ui hours;
public:
	time(void);
	time(ui);
	time(ui,ui,ui);

	time operator+(const time&) const;
	friend std::ostream& operator<<(std::ostream& os,const time& t1);


	~time(void);
};

enum vec{Decart,Polar};

class Vector
{
private:
	double x;
	double y;
	double angle;
	double modul;
	void Dec_to_polar()
	{
		modul = sqrt(x*x+y*y);
		angle = atan2(y,x);
	}
	void polar_Dec()
	{
		x = cos(angle) * modul;
		y = sin(angle) * modul;
	}
	vec Mode;
public:
	Vector()
	{
		Mode = Decart;
		x = 0;
		y = 0;
		Dec_to_polar();
	}
	Vector(double a, double b, vec mode=Decart)
	{
		if(mode == Decart)
		{
			Mode = mode;
			x = a;
			y = b;
			Dec_to_polar();
		}
		if(mode == Polar)
		{
			Mode = mode;
			modul = a;
			angle = b;
			polar_Dec();
		}
	}

	double operator+()
	{
		return modul;
	}

	void ChangeMode(vec mode)
	{
		Mode = mode;
	}

	Vector operator+(const Vector& v) const
	{
		Vector result;
		result.x = x + v.x;
		result.y = y + v.y;
		result.Dec_to_polar();
		return result;
	}
	Vector operator-()const
	{
		return Vector(-x,-y,Decart);
	}

	Vector operator*(double A) const
	{
		return Vector(x*A,y*A);
	}

	friend Vector operator*(double A, const Vector& v1)
	{
		return v1*A;
	}

	friend std::ostream& operator<<(std::ostream& os, Vector& v1)
	{
		if(v1.Mode == Decart)
			os << "X: " << v1.x << ", Y: " << v1.y;
		else os << "Module: " << v1.modul << ", angle°: " << v1.angle*(180/3.14159265358979323846);
		return os;
	}

};


class Drob
{
private:
	int numerator;
	unsigned int denomirator;
	int GCD(int a,int b)const
	{
		if(a < 0)
			a *= -1;
		while(b)
		{
			a %= b;
			std::swap(a,b);
		}
		return a;
	}
	int LCM(int a,int b)const
	{
		return a*b / GCD(a,b);
	}
	void Sokrashenie()
	{
		int nod = GCD(numerator , denomirator);
		numerator /= nod;
		denomirator /= nod;
	}


public:
	Drob():numerator(1),denomirator(1){};
	Drob(int n,unsigned int d)
	{
		if(d!=0)
		{
			 numerator = n;
			 denomirator = d;
			 Sokrashenie();
		}

		else
		{
			std::cout << "Çíàìåíàòåëü ðàâåí 0!!";
			throw std::bad_exception();
		}
	}
	double Result()
	{
		return (double)numerator / (double)denomirator;
	}


	Drob operator+(Drob& d1)const
	{
		Drob result;
		if(denomirator == d1.denomirator)
		{
			result.denomirator = denomirator;
			result.numerator = numerator + d1.numerator;
			result.Sokrashenie();
			return result;
		}

		int lcm = LCM(denomirator,d1.denomirator);
		int x = lcm / denomirator;
		int y = lcm / d1.denomirator;
		result.denomirator = lcm;
		result.numerator = numerator*x + d1.numerator*y;
		result.Sokrashenie();
		return result;
	}

	Drob operator*(Drob& d1)const
	{
		return Drob(numerator*d1.numerator, denomirator*d1.denomirator);
	}

	Drob operator-(Drob& d1)const
	{
		return Drob(numerator,denomirator) + Drob(-d1.numerator, d1.denomirator);
	}

	Drob operator/(Drob& d1)const
	{
		return Drob(numerator*d1.denomirator, denomirator*d1.numerator);
	}

	bool operator==(Drob& d1)const
	{
		if(d1.numerator == numerator && d1.denomirator == denomirator)
			return true;
		else return false;
	}


	friend std::ostream& operator<<(std::ostream& os, Drob& d1)
	{
		os << d1.numerator << "\\" << d1.denomirator;
		return os;
	}
};

class Complex
{
private:
	double Real;
	double Imag;
public:
	Complex():Real(0),Imag(0){}
	Complex(double Rel,double Im=0)
	{
		Real = Rel;
		Imag = Im;
	}

	Complex operator+(const Complex& c) const
	{
		return Complex(Real+c.Real , Imag+c.Imag);
	}
	Complex operator-() const
	{
		return Complex(-Real,-Imag);
	}
	Complex operator-(const Complex& c) const
	{
		return *this + (-c);
	}

	Complex operator*(const Complex& c) const
	{
		return Complex(Real*c.Real - Imag*c.Imag , Imag*c.Real + Real*c.Imag);
	}

	Complex operator/(const Complex& c) const
	{
		double r = (Real*c.Real+Imag*c.Imag)/(c.Real*c.Real + c.Imag*c.Imag);
		double i = (Imag*c.Real - Real*c.Imag)/(c.Real*c.Real + c.Imag*c.Imag);
		return Complex(r,i);
	}

	double Modul()
	{
		return sqrt(Real*Real + Imag*Imag);
	}

	friend std::ostream& operator<<(std::ostream& os,const Complex& c)
	{
		os << "Re: " << c.Real << ", Im: " << c.Imag;
		return os;
	}

};

