#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	cin >> n >> m;

	int** data = new int* [n]; // у меня будет n строчек
	for (int i = 0; i < n; ++i)
	{
		data[i] = new int[m]; // каждая строка будет длиной m символов
	}

	//n = 5
	//m = 4
	//data = 5 - адрес
	//data = {10, 14, 90, 22, 53}
	//data[0] = {10, 11, 12, 13}
	//data[1] = {14, 15, 16, 17}
	//data[2] = {90, 91, 92, 93}
	//data[3] = {22, 23, 24, 25}
	//data[4] = {53, 54, 55, 56}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			data[i][j] = (i + j) / 2;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("%2d ", data[i][j]);
		}
		cout << endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] data[i]; // удаляю каждую строчку
	}
	delete[] data; //удаляю указатели на строки

	return 0;
}