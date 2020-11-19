#include<iostream>
#include"Complex.h"

using namespace std;

int main()
{
	Complex z1(2, 5), z2(3, 1), z3(4, 0);
	cout << z1 << " " << z2 << " " << z3 << endl;

	cout << "short " << sizeof(short) << endl;
	cout << "int " << sizeof(int) << endl;
	cout << "long " << sizeof(long) << endl;
	cout << "long long " << sizeof(long long) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "float " << sizeof(float) << endl;
	cout << "Complex " << sizeof(Complex) << endl;

	cout << "short* " << sizeof(short*) << endl;
	cout << "int* " << sizeof(int*) << endl;
	cout << "long* " << sizeof(long*) << endl;
	cout << "long long* " << sizeof(long long*) << endl;
	cout << "double* " << sizeof(double*) << endl;
	cout << "double* " << sizeof(double*) << endl;
	cout << "float* " << sizeof(float*) << endl;
	cout << "Complex* " << sizeof(Complex*) << endl;
	cout << "void* " << sizeof(void*) << endl;



	return 0;
}