/*///////////////////////////
Автор - Денис марков	 ////							
STL						 ////	
*////////////////////////////


#include <iostream>
#include <conio.h>
#include <string>
#include <array>
#include <vector>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>


using namespace std;


int main()
{
	setlocale(LC_ALL , "Russian");

	list<int> a(3,5);
	vector<int> b(10);

	b[0] = 12;

	back_insert_iterator<vector<int>> p(b);


	copy(a.begin(),a.end(),p);

	for(int i: b)
	{
		cout << i << ' ';
	}
	

	_getch();
	return 0;
}