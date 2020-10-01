#include<iostream>
using namespace std;

void increment1(int a) //передача данных по значению
{
	a++;
}

void increment2(int& a) //передача данных по ссылке
{
	a++;
}

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	int a = 0;
	increment1(a); cout << "increment 1 : " << a << endl;
	increment1(a); cout << "increment 1 : " << a << endl;
	increment2(a); cout << "increment 2 : " << a << endl;
	increment2(a); cout << "increment 2 : " << a << endl;
	increment2(a); cout << "increment 2 : " << a << endl;
	increment1(a); cout << "increment 1 : " << a << endl;

	int b = 24;
	cout << a << " " << b << endl;
	swap(a, b);
	cout << a << " " << b << endl;
	return EXIT_SUCCESS;
}