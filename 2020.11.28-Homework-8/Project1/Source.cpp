#include<iostream>
#include"LinkedList.h"
using namespace std;
/*продемонстрировать работу всех функций
показать, что все функции и операторы корректно работают:
1). С пустым списком.
2). Со списком из 1 элемента.
3). Со списком из нескольких элементов.
*/

int main()
{
	LinkedList list;
	cout << "BY INDEX" << endl;
	list.add(0, 1);
	cout << list << endl;
	list.add(1, 3);
	cout << list << endl;
	list.add(1, 2);
	cout << list << endl;
	list.add(3, 4);
	list.add(4, 6);
	list.add(4, 5);
	cout << list << endl;
	cout << list.extract(1) << endl;
	cout << list << endl;
	cout << list.extract(5) << endl;
	cout << list << endl;
	cout << list.extract(4) << endl;
	cout << list << endl;
	cout << list.extract(3) << endl;
	cout << list << endl;
	cout << list.extract(0) << endl;
	cout << list << endl;
	cout << list.extract(1) << endl;
	cout << list << endl;
	cout << list.extract(0) << endl;
	cout << list << endl;

	cout << "HEAD" << endl;
	cout << list << endl;
	list.addToHead(1);
	cout << list << endl;
	list.addToHead(2);
	cout << list << endl;
	list.addToHead(3);
	cout << list << endl;
	cout << list.extractHead() << endl;
	cout << list << endl;
	cout << list.extractHead() << endl;
	cout << list << endl;
	cout << list.extractHead() << endl;
	cout << list << endl;
	cout << list.extractHead() << endl;
	cout << list << endl;

	cout << "TAIL" << endl;
	list.addToTail(1);
	cout << list << endl;
	list.addToTail(2);
	cout << list << endl;
	list.addToTail(3);
	cout << list << endl;
	cout << list.extractTail() << endl;
	cout << list << endl;
	cout << list.extractTail() << endl;
	cout << list << endl;
	cout << list.extractTail() << endl;
	cout << list << endl;
	cout << list.extractTail() << endl;
	cout << list << endl;
	cout << endl << "\tSWAP" << endl;
	list[0] = 0;
	list[1] = 1;
	list[2] = 2;
	list[3] = 3;
	list[4] = 4;
	list[5] = 5;
	list[6] = 6;
	list[7] = 7;
	list[8] = 8;
	cout << list << endl;
	list.swap(0, 0); list.swap(4, 4); list.swap(8, 8); list.swap(23, 23);
	cout << list << endl;
	list.swap(0, 3);
	cout << list << endl;
	list.swap(1, 0);
	cout << list << endl;
	list.swap(2, 0);
	cout << list << endl;
	list.swap(0, 7);
	cout << list << endl;
	list.swap(8, 0);
	cout << list << endl;
	list.swap(4, 5);
	cout << list << endl;
	list.swap(8, 5);
	cout << list << endl;

	return 0;
}