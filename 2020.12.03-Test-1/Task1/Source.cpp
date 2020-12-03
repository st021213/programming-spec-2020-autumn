#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double myFunction(double x, int n)
{
	return 3.1415926535;
}
/*
1. Варфоломеева, Первушова (sin)
2. Волков, Черенков (cos)
3. Гайкин, Сапожкова (exp)
4. Ткаченко, Широкова (1/(1+x))
5. Доля, Челабов (1/(1-x))
6. Иммиев, Петров (log(1+x))
7. Кудрина, Путилин (atan(x))
8. Марченко, Горбаченко (sinh(x))
9. Орловский, Ощепкова (cosh(x))
*/
int main()
{
	double x = 0;
	int n = 0;
	cin >> x >> n;
	cout << setprecision(9) << exp(x) << endl;
	cout << setprecision(9) << myFunction(x, n) << endl;
	return 0;
}