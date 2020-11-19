#pragma once
#include<ostream>
class Complex
{
private: //z = a + b * i; i * i = -1;
	double a;
	double b;

public:
	Complex(double a = 0, double b = 0) : a(a), b(b) {}
	Complex(const Complex& z);
	int getRe();
	int getIm();

	friend std::ostream& operator<<(std::ostream& stream, const Complex& z);
};

