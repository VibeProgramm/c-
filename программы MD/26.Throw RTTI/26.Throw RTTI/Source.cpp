/*////////////////////////////////////////
Автор - Марков Денис					//
Throw and RTTI							//
*/////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

class A
{
public:
	virtual void Print(){cout << "Print A!";}
	void A1(){cout << "A";}
};

class B : public A
{
public:
	virtual void Print(){cout << "Print B!";}
	virtual void B1(){cout << "B";}
};

class C : public B
{
public:
	virtual void Print(){cout << "Print C!";}
	virtual void B1(){cout << "C";}
};


int main(int argc,char** argv)
{
	setlocale(LC_ALL , "Russian");


	
	if(typeid(int) == typeid(int))
		cout << "!!!";


	_getch();
	return 0;
}