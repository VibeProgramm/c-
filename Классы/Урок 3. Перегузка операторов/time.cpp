#include "time.h"

namespace Program
{

	time::time(void)
	{
		hours = minutes = seconds = 0;
	}

	time::time(ui sec)
	{
		hours = sec / (60 * 60);
		minutes = sec % (60 * 60) / 60;
		seconds = sec % (60 * 60) % 60;
	}

	time::time(ui h, ui m, ui s)
	{
		if (h > 24 || m > 60 || s > 60)
		{
			time::time();
			return;
		}

		hours = h;
		minutes = m;
		seconds = s;
	}

	time time::operator+(const time& t) const
	{
		time result;
		result.seconds = (seconds + t.seconds) % 60;
		result.minutes = (minutes + t.minutes + (seconds + t.seconds) / 60) % 60;
		result.hours = (hours + t.hours + (minutes + t.minutes) / 60);

		return result;

	}


	time::~time()
	{
	}


}

	std::ostream& Program::operator<<(std::ostream & os, const Program::time & t1)
	{
		os << t1.hours << ':' << t1.minutes << ':' << t1.seconds;
		return os;
	}

	