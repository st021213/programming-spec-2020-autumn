#include<iostream>
using namespace std;

int main()
{
	int* a = new int[5]{ 1, 2, 3, 4, 5 };
	cout << "a\t=\t" << a << endl;
	cout << "*a\t=\t" << *a << endl;
	cout << "a[0]\t=\t" << a[0] << endl;
	cout << "(a + 1)\t=\t" << a + 1 << endl;
	cout << "*(a + 1)\t=\t" << *(a + 1) << endl;
	cout << "a[1]\t=\t" << a[1] << endl;

	delete[] a;
	return EXIT_SUCCESS;
}