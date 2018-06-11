//Автор: Мурзин Алексей
//Структура хранение времени. Создать функцию которая примет два аргумента 
//структуры времени, сложит время и вернет структуру времени как релузьтат (1:40 +2:30 = 4:30)
#include <std_lib_facilities.h>
struct Time
{
	int min;
	int hours;
	//string sum;
};
void sum(const Time &lval, const Time &rval)
{
	
	int h_sum, m_sum;

	h_sum = lval.hours + rval.hours;
	m_sum = lval.min + rval.min;

	if (m_sum >= 60)
	{
		
		int cout_h = m_sum / 60;
		for (int i = 0; i < cout_h; i++)
		{
			h_sum++; m_sum -= 60;
		}
	}
	cout << h_sum << ":" << m_sum << endl;
	/*string result = h_sum + ":" + m_sum;
	return result;*/
}
void Input() 
{

}
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Эта программа подсчитывает время\nВведите первое время\n";
	Time a;
	/*a.hours = 2;
	a.min = 30;*/
	cin >> a.hours >> a.min;

	cout << "Введите второе время\n";
	Time b;
	/*b.hours = 1;
	b.min = 30;*/
	cin >> b.hours >> b.min;

	sum(a, b);
	//cout << sum(a, b) << endl;

	
	_getch();
	return 0;
}