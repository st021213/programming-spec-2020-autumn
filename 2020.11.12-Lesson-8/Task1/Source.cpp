#include<iostream>
#include "LinkedList.h"

using namespace std;

void printList(LinkedList list)
{
	cout << "PRINTED LIST : " << list << endl << endl;
}

int main()
{
	LinkedList list;
	cout << list << endl;
	list.addToHead(5);
	cout << list << endl;
	list.addToHead(6);
	cout << list << endl;
	list.addToTail(8);
	cout << list << endl;
	list.add(2, 9);
	cout << list << endl;

	LinkedList* banana;
	banana = new LinkedList();
	(*banana).add(0, 4);
	banana->add(0, 5);
	cout << *banana << endl << endl;

	cout << "LIST" << list << endl;
	cout << list.get(5) << endl;
	cout << list.get(2) << endl;
	list.set(3, 4);
	cout << list << endl;
	list.set(4, 65);
	cout << list << endl;

	cout << "list[2] = " << list[2] << endl;
	list[1] = 12354;
	cout << "list[1] = " << list[1] << endl;
	cout << list << endl;
	list[-12] = -12;
	list[5123] = 1;
	cout << list << endl;

	LinkedList list1;
	list1.addToHead(5);
	list1.addToHead(3);
	list1.add(1, 45);
	cout << list << list1 << endl;
	LinkedList list2 = list;
	list = list1;
	list1 = list2;
	cout << list << list1 << endl;
	


	return 0;
}