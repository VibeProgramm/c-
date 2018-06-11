//Автор: Мурзин Алексей
//класы
#include <std_lib_facilities.h>
class Token
{	public:


		char kind;
		double value;

};



int main() {
	setlocale(LC_ALL, "Russian");


	/*int lval, rval , res = 0;
	char op;
	cout << "Введите выражение:\n";
	
	
	while (cin >> lval) //считываем оператор и правый операнд
	{
		

		if (!cin) error("Нет левого операнда\n");

		cin >> op;

		cin >> rval;
		if (!cin) error("Нет левого операнда\n");
		switch (op)
		{
		case '+': lval += rval; break;
		case '-': lval -= rval; break;
		case '*': lval *= rval; break;
		case '/': lval /= rval; break;

		default: error("Такая операция не предусмотрена"); break;
			
		}
		cout << lval << endl;
	}
	*/
	Token num_1;
	num_1.kind = '8';
	num_1.value = 10;
	

	Token oper;
	oper.kind = '-';
	
	Token num_2;
	num_2.kind = '8';
	num_2.value = 20;

	double res;

	switch (oper.kind)
	{
	case '+': res = num_1.value + num_2.value; break;
	case '-': res = num_1.value - num_2.value; break;
	default:
		break;
	}
	cout << res;
	_getch();
	return 0;
}