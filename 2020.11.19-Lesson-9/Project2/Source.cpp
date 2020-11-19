#include<iostream>
#include"LinkedList.h"
using namespace std;
int main()
{
	LinkedList list;
	cout << list << endl;
	list.addHead(3);
	cout << list << endl;
	list.addHead(2);
	list.addHead(1);
	list.addTail(4);
	list.addTail(5);
	cout << list << endl;
	list.insert(2, 162);
	cout << list << endl;

	cout << "REMOVE" << endl;
	list.removeHead();
	cout << list << endl;
	list.removeTail();
	cout << list << endl;
	list.remove(4);
	cout << list << endl;
	list.remove(1);
	cout << list << endl;
	list.addHead(12);
	list.addHead(11);
	list.addHead(10);
	list.addHead(156);
	list.addHead(112);
	cout << list << endl;
	list.remove(3);
	cout << list << endl;

	return 0;
}