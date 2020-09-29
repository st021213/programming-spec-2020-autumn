#include<iostream>
#define N 5 //константа в стиле С

const int n = 6; //константа в стиле С++

using namespace std;

int main(int argc, char* argv[])
{
	int c, d, e; //так нельзя
	int a[N] = { 0 };
	int b[n] = { 1, 2, 3, 4, 5, 2};
	for (int i = 0; i < n; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}