//�����: ������ �������
//������� �� ���������� ��������� � ��������
#include <std_lib_facilities.h>
struct XY
{
	double X, Y;
};

struct Polar
{
	double distanse, angle;
};
void showPolar(const Polar &p)
{
	const double degree = 57.29577;
	cout << "��������� = " << p.distanse << endl;
	cout << "���� � �������� = " << p.angle*degree;
}
Polar Convert(const XY &xy)
{
	Polar p;
	p.distanse = sqrt((xy.X*xy.X) + (xy.Y*xy.Y));
	p.angle = atan2(xy.X, xy.Y);
	return p;

}

int main()
{
	setlocale(LC_ALL, "Russian");


	XY a;
	Polar b;

	a.X = 10;
	a.Y = 10;
	
	b = Convert(a);
	showPolar(b);

	
	
	_getch();
	return 0;
}