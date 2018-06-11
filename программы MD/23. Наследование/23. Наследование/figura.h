#pragma once
#include <valarray>
#include <iostream>

struct Point
{
		double x;
		double y;
};

class figura
{
private:

	Point* Coordinates;
	int n;
public:
	figura(Point* xy,int size)
	{
		Coordinates = new Point[size];
		n = size;
		for(int i(0); i < size; i++)
		{
			Coordinates[i] = xy[i];
		}
	}

	figura()
	{
		Coordinates = NULL;
		n = 0;
	}

	figura(figura& f)
	{
		Coordinates = new Point[f.n];
		n = f.n;
		for(int i(0); i < n; i++)
		{
			Coordinates[i] = f.Coordinates[i];
		}
	}

	friend std::ostream& operator<<(std::ostream& os, figura &f)
	{
		for(int i(0); i < f.n; i++)
		{
			os << f.Coordinates[i].x << "  ";
			os << f.Coordinates[i].y;
				os << std::endl;
			
		}
		return os;
	}

	friend std::istream& operator >>(std::istream& is, figura &f)
	{
		std::cout << "¬ведите кол-во точек в фигуре: ";
		is >> f.n;  
		f.Coordinates = new Point [f.n];
		for(int i(0); i < f.n; i++)
		{
			std::cout << "¬ведите " << i+1 << " point:\n";
			std::cout << "x:";
			is >> f.Coordinates[i].x;
			std::cout << "y:";
			is >> f.Coordinates[i].y;
		}
		return is;
	}

	double distance(int i1,int i2)
	{
		double x1,y1,x2,y2;
		x1 = Coordinates[i1].x;
		y1 = Coordinates[i1].y;
		x2 = Coordinates[i2].x;
		y2 = Coordinates[i2].y;

		return sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
	}

	Point& operator[](int i)
	{
		return Coordinates[i];
	}

	~figura(void){delete [] Coordinates;};
};


class Circle : public figura
{
private:
	double radius;
public:
	Circle(Point& p, double rad):figura(&p,1),radius(rad){};
	Circle(figura& f):figura(f)
	{
		radius = f.distance(0,1);
	};
	Circle():figura(),radius(0){};

	double Area()
	{
		return radius*radius*3.1459;
	}
	double Radius()
	{
		return radius;
	}
};

class Rectangle:public figura
{
private:
	double a;
	double b;
public:
	Rectangle(figura& f):figura(f)
	{
		a = f.distance(0,1);
		b = f.distance(1,2);
	}
	Rectangle():figura(),a(0),b(0){}
	double Area()
	{
		return a*b;
	}
};

