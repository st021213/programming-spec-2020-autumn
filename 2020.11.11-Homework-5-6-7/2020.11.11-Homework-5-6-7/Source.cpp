#include <iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
	ArrayList list1;
	cout << list1 << endl;
	cout << list1.toString() << endl << endl;

	list1 += 4;
	list1 += -1238;
	list1 += 4323;
	list1 += 21;
	list1 += 6;
	cout << "list1 : " << list1 << endl << endl;

	list1 -= 4;
	cout << "list1 : " << list1 << endl << endl;

	ArrayList list2;
	list2 = list1 + 12;
	cout << "list1 : " << list1 << endl;
	cout << "list2 : " << list2 << endl << endl;

	ArrayList list3 = list1 + list2;
	cout << "list1 : " << list1 << endl;
	cout << "list2 : " << list2 << endl;
	cout << "list3 : " << list3 << endl << endl;

	list3 = list3 - 4323;
	cout << "list3 : " << list3 << endl << endl;
	list3 = list3 - 4323;
	cout << "list3 : " << list3 << endl << endl;
	list3 = list3 - 4323;
	cout << "list3 : " << list3 << endl << endl;
	

	int a = 5;		//  0101
	int b = 9;		//  1001
	int c = a & b;	//  0001 -> 1
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	c = a | b;      //  1101 -> 13
	cout << "a = " << a << " b = " << b << " c = " << c << endl;

	a = 0;           // 0000
	b = 7;           // 0111
	c = a && b;      // 0 && 1 = 0
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	c = a || b;      // 0 || 1 = 1
	cout << "a = " << a << " b = " << b << " c = " << c << endl;

	a = 0;           // 00000000
	b = -6;          // 11111010
	c = a && b;      // 0 && 1 = 0
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	c = a || b;      // 0 || 1 = 1
	cout << "a = " << a << " b = " << b << " c = " << c << endl;

	//if (5);
	//for(int i = 0; i; ++i);
	//for(int i = 4; i; ++i);

	cout << list1 << endl;
	list1[0] = 4;
	list1[5] = 42;
	cout << list1 << endl;
	list1[-142] = -142;
	list1[142] = 142;
	cout << list1 << endl;

	return EXIT_SUCCESS;
}