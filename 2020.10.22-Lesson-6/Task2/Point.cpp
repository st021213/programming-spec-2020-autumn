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

void Point::addToStr(int& index, char symbol)
{
	str[index] = symbol;
	++index;
}

void Point::addToStr(int& index, int number)
{
	int length = numLength(number);
	for (int i = 0; i < length; ++i)
	{
		int digit = number % 10;
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
	addToStr(index, '(');
	addToStr(index, x);
	addToStr(index, ',');
	addToStr(index, ' ');
	addToStr(index, y);
	addToStr(index, ')');
	addToStr(index, '\0');
	return str;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::setX(int xx)
{
	x = xx;
}

void Point::setY(int yy)
{
	y = yy;
}

Point operator+(Point point1, Point point2)
{
	Point result;
	result.setX(point1.x + point2.x);
	result.setY(point1.y + point2.y);
	return result;
}

Point operator-(Point& point1, Point& point2)
{
	Point result;
	result.setX(point1.x - point2.x);
	result.setY(point1.y - point2.y);
	return result;
}

Point operator*(Point& p1, int x)
{
	return Point(p1.x * x, p1.y * x);
}

Point operator*(int x, Point& p1)
{
	return Point(p1.x * x, p1.y * x);
}

Point& Point::operator=(const Point& p)
{
	x = p.x;
	y = p.y;
	str = p.str;
	return *this;
}