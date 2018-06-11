/*////////////////////////////////////////
Автор - Марков Денис					//
Структуры данных						//
*/////////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

struct Time
{
	int Hour;
	int Minute;
};

void Init(int hours,int minutes, Time &t)
{
	if(minutes >= 60)
	{
		t.Hour		= 0;
		t.Minute	= 0;
		return;
	}

	t.Hour	 = hours;
	t.Minute = minutes;

}


Time Add(const Time &t1,const Time &t2)
{
	Time result;
	if(t1.Minute + t2.Minute >= 60)
	{
		result.Hour = t1.Hour + t2.Hour + 1;
		result.Minute = (t1.Minute + t2.Minute)%60;
		return result;
	}

		result.Hour = t1.Hour + t2.Hour;
		result.Minute = (t1.Minute + t2.Minute);
		return result;

}

void Show(const Time &t1)
{
	cout << t1.Hour << " : " << t1.Minute << endl;
}


int main()
{
	setlocale(LC_ALL , "Russian");

	cout << "***Время***\n\n";

	Time t1,t2,t3;

	Init(3,40,t1);
	Init(2,37,t2);

	t3 = Add(t1,t2);

	Show(t3);

	
	
	_getch();
	return 0;
}