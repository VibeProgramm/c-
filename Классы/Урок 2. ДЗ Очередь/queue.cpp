#include "queue.h"

namespace Program
{

	queue::queue(int num)
	{
		arr = new int[num];
		max = num;
	}


	queue::~queue()
	{
		delete[] arr;
	}

}