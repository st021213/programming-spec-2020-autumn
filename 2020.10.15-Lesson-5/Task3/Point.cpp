#include "Point.h"

Point::~Point()
{
	if (str != nullptr)
	{
		delete[] str;
	}
}

int Point::numLength(int number)
{
	int result = 1;
	while (number > 9)
	{
		number /= 10;
		result++;
	}
	return result;
}

void Point::addSymbol(int& index, char symbol)
{
	str[index] = symbol;
	++index;
}

void Point::addNumber(int& index, int number)
{
	int length = numLength(number);
	for (int i = 0; i < length; ++i)
	{
		int digit = number % 10;
		// 123 -> "abc"
		//        "abc  3"   
		//        "abc 23"  
		//        "abc123"
		//'5' = '0' + 5;
		str[index + length - 1 - i] = '0' + digit;
		number /= 10;
	}
	index += length;
}

char* Point::toString()
{
	if (str != nullptr)
	{
		delete[] str;
		str = nullptr;
	}
	int length = 5 + numLength(x) + numLength(y); // 5 -> (, )\0
	str = new char[length];
	int index = 0;
	addSymbol(index, '(');
	addNumber(index, x);
	addSymbol(index, ',');
	addSymbol(index, ' ');
	addNumber(index, y);
	addSymbol(index, ')');
	addSymbol(index, '\0');
	return str;
}