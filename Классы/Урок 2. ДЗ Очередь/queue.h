#pragma once
#include <iostream>

namespace Program
{


	class queue
	{
	private:
		int* arr;
		int index = 0;
		int min = 0;
		int max;
	public:
		queue(int num);
		void Push(int val)
		{
			if (index < max)
			{
				arr[index] = val;
				index++;
			}
			else std::cout << "Стэк переполнен\n";
		}
		int Pop()
		{
			if (min < index )
			{
											//int min_m = min;
				return 	arr[min++];			//min++;		сначала возвращаем min, потом инкремитируем
											//return arr[min_m];
				
			}
			else return -1;

		}
		
		
		~queue();
	};
	



	//через двухсвязанный список
	/*struct queue
	{
		int key;
		queue* next;
		queue* back;
	};
	class queue2
	{
	private:
		queue * begin;
	public:
		queue2() { begin = NULL; }

		~queue2()
		{

			while (begin != NULL)
			{
				queue *pv = begin;
				begin = begin->next;
				delete pv;
			}

		}

		void Push(int d)
		{
			queue *p = new  queue;
			p->key = d;
			p->next = NULL;


			if (begin == NULL)
			{
				begin = p;
				(begin)->back = NULL;
			}
			else
				while (1)
				{
					if ((begin)->next == NULL)
					{
						begin->next = p;
						break;
					}
					queue* temp = begin;
					begin = (begin)->next;
					(begin)->back = temp;
				}

			while (1)
			{
				if (begin->back == NULL)
					break;
				begin = begin->back;
			}


		}

		int Pop()
		{
			int temp = begin->key;
			queue *pv = begin;

			begin = begin->next;
			delete pv;
			return temp;
		}

	};*/

}