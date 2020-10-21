#include<iostream>
#include"ArrayList.h"
using namespace std;

int main()
{
	ArrayList list;
	list.push_back(1);
	list.push_back(12);
	list.push_back(123);
	list.push_back(1234);
	cout << list.toString() << endl;
	list.push_back(123);
	list.push_back(1234);
	cout << list.toString() << endl;
	return 0;
}