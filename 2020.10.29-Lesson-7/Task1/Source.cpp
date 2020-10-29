#include<iostream>
#include"Point.h"

using namespace std;

int main()
{
	Point p(0, 0, 0);
	cout << p << endl;

	Point x(1, 0, 0);
	Point y(0, 1, 0);
	Point z;

	p.add(x).add(y).add(x);

	cout << "p = " << p << " x = " << x << " y = " << y << " z = " << z << endl;

	p = p + x + y + x;
	cout << "p = " << p << " x = " << x << " y = " << y << " z = " << z << endl;

	z = x + y + z;
	cout << "p = " << p << " x = " << x << " y = " << y << " z = " << z << endl;

	z = Point(0, 0, 1);

	p = 3 * x + y * 5 - 6 * z;
	cout << p << endl;

	p *= -5;
	cout << p << endl;

	p = x + y;
	cout << p << endl;

	return 0;
}
