//Автор: Мурзин Алексей
#include <std_lib_facilities.h>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите тип конвертации\n1 йена в евро\n2 фунты стерлингов в доллары\n3 юань в крону\n";
	char chose; cin >> chose;
	
	cout << "Введите кол-во денег\n";
	double money; cin >> money;


	switch (chose) {
	case '1': cout << money 
		<< " йена = " << money * 0.007594 << " евро"; break; 

	case '2': cout << money << " футов стерлингов = "
		<< money * 0.72 << " доллоров"; break;;

	case '3': cout << money << " юань = "
		<< money * 0.72 << " корон"; break;


	default : cout << "Я не знаю такой операции"; break;

	}
	_getch();
	return 0;
}