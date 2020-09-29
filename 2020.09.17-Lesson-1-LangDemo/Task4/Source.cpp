#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{

	int a = 0;
	int b = 0;
	cin >> a;

	b = 0;
vasya:
	cout << b << " ";
	b++;
	if (b <= a) {
		goto vasya;
	}
	cout << endl;

	b = 0;
	while (b <= a)
	{
		cout << b << " ";
		b++;
	}
	cout << endl;

	b = 0;
	do
	{
		cout << b << " ";
		++b;
	} while (b <= a);
	cout << endl;

	int c = 0;
	for (b = 0; b <= a; ++b, --c);
	{
		cout << b << " ";
	}
	cout << endl;


	return EXIT_SUCCESS;
}