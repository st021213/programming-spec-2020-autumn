#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int ii;
	long ll;
	bool bb;
	float ff;
	double dd;
	long long llll;
	short ss;
	char cc;

	int a = 0;
	int b = 1;
	int c = 0;
	c = a + b;
	c = a - b;
	c = a * b;
	c = a / b; //целая часть от деления a на b
	c = a % b; //остаток от деления a на b

	c = a | b; //дизъюнкция
	c = a & b; //конъюнкция
	c = a ^ b; //исключающее или
	c = ~a; //инверсия
	c = a >> 3; //побитовый сдвиг вправо на 3
	c = a << 5; //побитовый сдвиг влево на 5

	c += a; // c = c + a;
	c -= a; // c = c - a;
	c *= b; // c = c * b;
	c /= b; // c = c / b;
	c %= b; // c = c % b;

	a++; // a = a + 1;
	++a; // a = a + 1;
	a--; // a = a - 1;
	--a; // a = a - 1;

	a = 3;
	//  3   +   5 +   6 + 6   + 7
	a = a++ + ++a + ++a + a++ + a++;//a = 27???
	cout << "a = " << a << ", b = " << b << endl;

	cin >> a;


	return EXIT_SUCCESS;
}