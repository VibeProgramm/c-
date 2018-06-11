/*////////////////////////////////////////
Автор - Марков Денис					//
Структуры данных						//
*/////////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

struct XY
{
	double X;
	double Y;
};

struct Polar
{
	double distance;
	double angle;
};

void showPolar(const Polar &p)
{
	const double degree = 57.29577;

	cout  << "Растояние: " << p.distance << endl;
	cout  << "Угол в градусах°: " << p.angle*degree << endl;
}

Polar Covert(const XY &xy)
{
	Polar p;
	p.distance = sqrt((xy.X*xy.X) + (xy.Y*xy.Y) );
	p.angle = atan2(xy.X , xy.Y);

	return p;

}


int main()
{
	setlocale(LC_ALL , "Russian");


	XY a;
	Polar b;

	a.X = 10;
	a.Y = 10;

	b = Covert(a);
	showPolar(b);
	
	_getch();
	return 0;
}