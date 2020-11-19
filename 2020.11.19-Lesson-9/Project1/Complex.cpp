#include "Complex.h"

Complex::Complex(const Complex& z)
{
	a = z.a;
	b = z.b;
}

int Complex::getRe()
{
	return a;
}

int Complex::getIm()
{
	return b;
}


std::ostream& operator<<(std::ostream& stream, const Complex& z)
{
	stream << z.a << "+" << z.b << "*i";
	return stream;
}
