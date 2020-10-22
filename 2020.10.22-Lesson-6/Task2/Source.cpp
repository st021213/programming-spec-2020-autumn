#include<iostream>
#include"Point.h"

using namespace std;

int main()
{
	Point p1(22, 33), p2(11, 22);

	cout << p1.toString() << endl;
	cout << p2.toString() << endl;

	Point p3 = p1 + p2;
	cout << p3.toString() << endl;

	cout << (p1 + p2).toString() << endl;
	cout << (p1 - p2).toString() << endl;
	cout << (4 * p1).toString() << endl;
	cout << (p2 * 2).toString() << endl;

	p3 = 4 * p1 + p2 * 2;
	cout << "4 * p1 + p2 * 2 = " << p3.toString() << endl;
	return EXIT_SUCCESS;
}