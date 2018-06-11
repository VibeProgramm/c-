//Автор: Мурзин Алексей
//Шаблонный стэк и очередь

#include <std_lib_facilities.h>



class stek
{
private:
	int* arr;
	int Max;
	int index = 0;

public:
	stek(int number)
	{
		Max = 1000;
		if (number <= Max)
		{
			arr = new int[number];
			Max = number;
		}
		else cout << "переполнение стека!\n";

	}
	~stek()
	{
		delete[] arr;
	};

	bool Push(int n)
	{
		if (index == Max) return false;
		else
		{
			arr[index] = n;
			index++;
			return true;
		}
	}

	int Pop()
	{
		if (index < 0) return -1;
		else return arr[--index];
	}

	bool Is_emty()
	{
		if (index <= 0) return true;
		else return false;
	}
	bool Is_full()
	{
		if (index == Max) return true;
		else return false;
	}
};

class stek_2
{
private:
	int index = 0;
	int Max;
	int *arr;
public:
	stek_2(int num)
	{
		arr = new int[num];
		Max = num;
	}

	bool Push(int num)
	{
		if (Max > index)
		{
			arr[index] = num;
			index++;
			return true;
		}
		else return false;
	}

	int Pop()
	{
		if ( index >= 0)
		{
			
			return arr[--index];
		}
		else return -1;
	}

	~stek_2()
	{
		delete[] arr;
	}


};



int main()
{
	setlocale(LC_ALL, "Russian");
	
	stek s(10);

	s.Push(1);

	//cout << s.Pop() << endl;

	stek_2 s2(10);

	for (int i = 0; i < 11; i++)
	{
		s2.Push(i + 1);
	}

	for (int i = 0; i < 11; i++)
	{
		cout << s2.Pop() << endl;
	}
	
	_getch();
	return 0;
}