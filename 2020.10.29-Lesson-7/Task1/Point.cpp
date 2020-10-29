#include "Point.h"

Point::Point(int x, int y, int z)
{
	//cout << "\t\t\PARAMETRIZED CONSTRUCTOR CALL" << endl;
	this->x = x;
	this->y = y;
	this->z = z;
}

Point::Point(const Point& point)
{
	//cout << "\t\t\tCOPY CONSTRUCTOR CALL" << endl;
	x = point.x;
	y = point.y;
	z = point.z;

	(*this).x = point.x;
	this->y = point.y;
	this->z = point.z;

}

Point::~Point()
{
	//cout << "\t\t\tDESTRUCTOR CALL" << endl;
}

Point& Point::add(const Point& point)
{
	x += point.x;
	y += point.y;
	z += point.z;
	return *this;
}

Point& Point::operator=(const Point& point)
{
	cout << "\t\t\EQUAL OPERATOR CALL" << endl;
	if (&point != this)
	{
		x = point.x;
		y = point.y;
		z = point.z;
	}
	return *this;
}

void Point::operator*=(int k)
{
	x *= k;
	y *= k;
	z *= k;
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "(" << point.x << ";" << point.y << ";" << point.z << ")";
	return out;
}

Point operator+(const Point& point1, const Point& point2)
{
	Point result;
	result.x += point1.x;
	result.y += point1.y;
	result.z += point1.z;

	result.x += point2.x;
	result.y += point2.y;
	result.z += point2.z;
	return result;
}

Point operator-(const Point& point1, const Point& point2)
{
	return Point(point1.x - point2.x, point1.y - point2.y, point1.z - point2.z);
}

Point operator*(const Point& point, const int k)
{
	return Point(point.x * k, point.y * k, point.z * k);
}

Point operator*(const int k, const Point& point)
{
	return Point(point.x * k, point.y * k, point.z * k);
}
