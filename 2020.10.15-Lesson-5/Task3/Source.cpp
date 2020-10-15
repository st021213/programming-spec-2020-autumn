#include<iostream>
#include"Point.h"

using namespace std;

int main()
{
	Point p(123, 12);
	cout << p.toString() << endl;
	p.x = 0;
	p.y = 0;
	return 0;
}