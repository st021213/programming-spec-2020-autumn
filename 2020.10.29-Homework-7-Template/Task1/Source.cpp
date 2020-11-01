#include<iostream>
using namespace std;
#include"ArrayList.h"
int main()
{
	ArrayList list1, list2;
	list1 += 4; list1 += 1; list1 += 2; list1 += 3; list1 += 4; list1 += 6;
	list2 += 19; list2 += 18; list2 += 15; list2 += 14; list2 += 13; list2 += 12;
	ArrayList list3;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << "list3 = list1 + 5";
	list3 = list1 + 5;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << endl;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << "list3 = list1 + list2";
	list3 = list1 + list2;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << endl;
	//и так далее

	return 0;
}