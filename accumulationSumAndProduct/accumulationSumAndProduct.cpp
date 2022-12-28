#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "Rus");
	int i,
	    S = 0,
	    P = 1;
	for (i = 1; i <= 3; i++)
	{
		S += i;
		P *= i;
	}
	cout << "Сумма чисел от 1 до 3 равна " << S << endl;
	cout << "Произведение чисел от 1 до 3 равна " << P << endl;
	system("PAUSE");
	return 0;
}
