#include<iostream>
#include"Point.h"

using namespace std;

int main()
{
	Point p(123, 12);
	cout << p.toString() << endl;
	p.x = 55;
	p.y = 55;
	cout << p.toString() << endl;

	return 0;
}