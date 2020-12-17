#include<iostream>

using namespace std;

int main()
{
	const int N = 5;
	const int M = 3;
	int* a = new int[N * M]{ 0 };
	for (int i = 0, k = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j, ++k)
		{
			//i, j индекс
			a[i * M + j] = k;
		}
	}

	for (int i = 0; i < N * M; ++i)
	{
		printf("%2d%c", a[i], ((i + 1) % M == 0 ? '\n' : ' '));
	}

	return 0;
}