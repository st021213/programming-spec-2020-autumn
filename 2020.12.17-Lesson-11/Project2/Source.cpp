#include<iostream>
#define M 7

using namespace std;

int main()
{
	const int N = 5;
	int a[N][M];
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			a[i][j] = N + M - i - j - 1;
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			printf("%2d ", a[i][j]);
		}
		cout << endl;
	}

	return 0;
}