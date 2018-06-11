#pragma once
#include <iostream>
#include <cstring>

namespace Program
{
	typedef unsigned int ui;
	class Account
	{
	private:
		char* ID;
		char* Name;
		ui Balance;
		ui Max;
	public:
		Account(void);
		Account(char* id, char* name="", ui balnce=0);
		void	setID(char*);
		char*	getID();
		void	setName(char*);
		char*	getName();
		ui		getBalance();
		void	setBalance(ui);
		void    AddBalance(ui);
		void    TakeMoney(ui);
		Account MAX(Account&);

		~Account(void);
	};
	
	class book
	{
	private:
		char*	NameBook;
		char*	Author;
		ui		NumberList;
	public:
		book(){NameBook = ""; Author = ""; NumberList = 0;}
		book(char* Name, char* author, ui numberList)
		{
			NameBook = Name;
			Author = author;
			NumberList = numberList;
		}

		char* GetNameBook() const
		{
			return NameBook;
		}

		char* GetAuthor() const
		{
			return Author;
		}

		ui GetSize() const
		{
			return NumberList;
		}

		void Print(std::ostream &os) const
		{
			os << "Название книги: " << NameBook << std::endl;
			os << "Имя автора: " << Author << std::endl;
			os << "Количество страниц: " << NumberList << std::endl;
		}

		book Max(const book &b)
		{
			if(NumberList > b.GetSize())
				return *this;
			else return b;
		}
	
	};

	
	class Stack1
	{
	private:
		int* arr;
		int Max;
		int index;
	public:
		Stack1(int number)
		{
			Max = 1000;
			index = 0;
			if(number <= Max)
			{
				arr = new int[number];
				Max = number;
			}
			else std::cout << "Переполнение стека!";
		}
		~Stack1()
		{
			delete [] arr;
		};
	
		bool Push(int n)
		{
			if(index == Max)
				return false;
			else{
				arr[index] = n;
				index++;
				return true;
			}
		}

		int Pop()
		{
			if(index < 0)
				return 0;
			else 
			{
				return arr[--index];
			}
		}

		bool Is_empty()
		{
			if(index <= 0)
				return true;
			else return false;
		}

		bool Is_full()
		{
			if(index == Max)
				return true;
			else return false;
		
		}
	
	};

	

	template<typename T>
	class Stack2
	{
	private:
		struct Stek
		{
			T key;
			Stek* next;
		};
		
		Stek *next;
		int topIndex;
	public:
		class bad_Stack
		{
		private:
			int wrong_index;
		public:
			bad_Stack(int i){wrong_index = i;}
			void what()
			{
				cout << "In stack type: " <<(typeid(T)).name() << ", wrong method Pop with index: " 
					<< wrong_index << endl;
			}
		};
		Stack2(){ next = NULL; topIndex = 0;};
		
		void Push(T d)
		{
			    Stek *pv = new Stek;      // объявляем новую динамическую переменную типа stek
				pv->key = d;                // записываем  значение, которое помещается в стек
				pv->next = next;          // связываем новый элемент стека с предыдущим
				next = pv;                // новый элемент стека становится его вершиной
				topIndex++;
		}

		T Pop()
		{
			topIndex--;
			if(topIndex >= 0)
			{
			    T temp = next->key;		// извлекаем в переменную temp значение в вершине стека
				Stek *pv = next;			// запоминаем указатель на вершину стека, чтобы затем
												// освободить выделенную под него память
				next = next->next;      // вершиной становится предшествующий top элемент
				 delete pv;					 // освобождаем память, тем самым удалили вершину
				return temp;				// возвращаем значение, которое было в вершине
			}
			else
			{
				throw bad_Stack(topIndex);
			}
		}

		bool isEmpty()
		{
			if(topIndex <= 0)
				return true;
			else return false;
		}

		~Stack2(){delete [] next;}
	
	};


	struct queue
	{
		int key;
		queue* next;
		queue* back;
	};

	class queue2
	{
	private:
		queue *begin;
	public:
		queue2(){begin = NULL;}
		
		~queue2()
		{
			
			while(begin != NULL)
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

			
			if(begin == NULL)
			{
				begin = p;
				(begin)->back = NULL;
			}
			else
				while(1)
				{
					if((begin)->next == NULL)
					{
						begin->next = p; 
						break;
					} 
					queue* temp = begin;
					begin = (begin)->next; 
					(begin)->back = temp;
				}

			while(1)
			{
				if(begin->back == NULL)
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
	
	};

	class Queue
	{
	private:
		int *arr;
		int index;
		int top;
		int min;
	public:
		Queue(int size)
		{
			top = size;
			index = 0;
			min = 0;
			arr = new int[size];

		}
		~Queue()
		{
			delete [] arr;
		}

		void Push(int k)
		{
			if(index < top)
			{
				arr[index] = k;
				index++;
			}
		}

		int Pop()
		{
			if(min < index)
			{
				return arr[min++];
			}
		}

		void resize()
		{
			min = 0;
			index = 0;
		}
	
	};

	class String
	{
	private:
		char* str;
		ui length;
		static int number_Elem;
	public:
		String(){str=NULL; length =0;}
		String(char *s)
		{
			number_Elem++;
			std::cout << "Всего создано " << number_Elem << " объектов класса String\n";
			length = strlen(s);
			str = new char[length+1];
			for(unsigned int i(0); i < length; i++)
				str[i] = s[i];
			str[length] = '\0';
		}

		static int f()
		{
			return number_Elem;
		}

		String(const String& s)
		{
			length = strlen(s.str);
			str = new char[length+1];
			for(unsigned int i(0); i < length; i++)
				str[i] = s.str[i];
			str[length] = '\0';
		}

		String& operator=(const String& s)
		{
			delete [] str;
			length = strlen(s.str);
			str = new char[length+1];
			for(unsigned int i(0); i < length; i++)
				str[i] = s.str[i];
			str[length] = '\0';
			return *this;
		}

		operator char*()
		{
			char *str = new char [this->length+1];
			for(unsigned int i(0); i < length; i++)
				str[i] = this->str[i];
			str[length] = '\0';
			return str;
		}

		~String()
		{
			number_Elem--;
			std::cout << "Уничтожен объект: " << number_Elem << " осталось!\n";
			delete [] str;
		}

		friend std::ostream& operator<<(std::ostream& os, String& s)
		{
			os << s.str;
			return os;
		}
	
	};


}

