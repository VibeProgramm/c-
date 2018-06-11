//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>

void Fout(const string file, const string val, bool ios_app)
{
	//вывод в файл

	ofstream fout;

	if (ios_app)
	{
		fout.open(file, ios::app);
		fout << val;
		return;
	}

	if (!ios_app)
	{
		fout.open(file);
		fout << val;
		return;
	}


}
void Print(ostream &os)
{
	os << "Hello, World" << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	
	ofstream fout ("text.txt");
	
	Print(cout);
	Print(fout);
	
	_getch();
	return 0;
}