#include<iostream>
#define N 5 //��������� � ����� �

const int n = 6; //��������� � ����� �++

using namespace std;

int main(int argc, char* argv[])
{
	int c, d, e; //��� ������
	int a[N] = { 0 };
	int b[n] = { 1, 2, 3, 4, 5, 2};
	for (int i = 0; i < n; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}