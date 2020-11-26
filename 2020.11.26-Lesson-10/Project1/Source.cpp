#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	cout << a << endl;
	cin >> a;
	cout << a << endl;

	char c = ' ';
	while (c != '\n') // \r \n \0
	{
		cin >> c;
		cout << "\'" << c << "\'";
	}
}