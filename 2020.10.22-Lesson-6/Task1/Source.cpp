#include<iostream>
#include"Point.h"

using namespace std;

void print1(Point& p)
{
	p.setX(1);
	cout << p.toString() << endl;
}

void print2(Point p)
{
	p.setX(2);
	cout << p.toString() << endl;
}

int main()
{
	Point p1(44, 22);

	cout << p1.toString() << endl; // 44, 22
	print1(p1); // 1, 22

	print2(p1); // 2, 22
	cout << p1.toString() << endl; // 1, 22
	
	return EXIT_SUCCESS;
}