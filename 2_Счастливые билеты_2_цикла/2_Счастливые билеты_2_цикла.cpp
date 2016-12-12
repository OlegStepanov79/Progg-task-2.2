#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	int i1, i2;
	double C;
	C = 0;
	for (i1 = 0; i1 < 1000; i1++)
		for (i2 = 0; i2 < 1000; i2++)
			if (i1 % 10 + (i1 % 100 - i1 % 10) / 10 + (i1 % 1000 - i1 % 100) / 100 == i2 % 10 + (i2 % 100 - i2 % 10) / 10 + (i2 % 1000 - i2 % 100) / 100)
				C = C + 1;
	setlocale(LC_ALL, "Russian");
	cout << "Количество счастливых билетов " << C;
	return 0;
}