#include<iostream>
#include<string>
using namespace std;
int main()
{
	char* ctr = new char[10];
	cin >> ctr;
	cout << "\"" << ctr << "\"" << endl;
	cin.getline(ctr, 10);
	cout << "\"" << ctr << "\"" << endl;
	cin.getline(ctr, 10);
	cout << "\"" << ctr << "\"" << endl;

	cout << endl << "\tSTRINGS" << endl;
	string str;
	cin >> str;
	cout << "\"" << str << "\"" << endl;
	getline(cin, str);
	cout << "\"" << str << "\"" << endl;
	getline(cin, str);
	cout << "\"" << str << "\"" << endl;
	return 0;
}