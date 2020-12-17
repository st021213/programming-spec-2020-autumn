#include<iostream>

using namespace std;

int main()
{
	//a - это два массива длиной 4
	int a[4][2];
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			a[i][j] = i + j;
		}
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}