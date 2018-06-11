//Автор: Мурзин Алексей
//Абстрактный класс - это класс у которо сущетвует один метод со значение 0

#include <std_lib_facilities.h>

class Abstract
{
protected:
	//pseud
	//Poiner center;
public:
	// методы
	virtual void draw() = 0;
};



int main()
{
	setlocale(LC_ALL, "Russian");


	
	_getch();
	return 0;
}