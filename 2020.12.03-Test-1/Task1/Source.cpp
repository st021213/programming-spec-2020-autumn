#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double myFunction(double x, int n)
{
	return 3.1415926535;
}
/*
1. ������������, ��������� (sin)
2. ������, �������� (cos)
3. ������, ��������� (exp)
4. ��������, �������� (1/(1+x))
5. ����, ������� (1/(1-x))
6. ������, ������ (log(1+x))
7. �������, ������� (atan(x))
8. ��������, ���������� (sinh(x))
9. ���������, �������� (cosh(x))
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