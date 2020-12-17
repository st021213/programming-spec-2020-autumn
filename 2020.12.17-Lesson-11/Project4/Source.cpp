#include<iostream>

using namespace std;

int** initMatrix(int dimention)
{
	int** matrix = new int* [dimention] { 0 };
	for (int i = 0; i < dimention; ++i)
	{
		matrix[i] = new int[dimention] { 0 };
	}
	return matrix;
}

void freeMatrix(int** matrix, int dimention)
{
	for (int i = 0; i < dimention; ++i)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}

void randomizeMatrix(int** matrix, int dimention, int a = -9, int b = 9)
{
	for (int i = 0; i < dimention; ++i)
	{
		for (int j = 0; j < dimention; ++j)
		{
			matrix[i][j] = rand() % (b - a + 1) + a;
		}
	}
}

void printMatrix(int** matrix, int dimention)
{
	for (int i = 0; i < dimention; ++i)
	{
		for (int j = 0; j < dimention; ++j)
		{
			printf("%3d ", matrix[i][j]);
		}
		cout << endl;
	}
}

int main()
{
	const int DIM = 3;
	int** a = initMatrix(DIM);
	int** b = initMatrix(DIM);
	int** c = initMatrix(DIM);

	randomizeMatrix(a, DIM);
	randomizeMatrix(b, DIM);
	for (int i = 0; i < DIM; ++i)
	{
		for (int j = 0; j < DIM; ++j)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printMatrix(a, DIM);
	cout << " + " << endl;
	printMatrix(b, DIM);
	cout << " = " << endl;
	printMatrix(c, DIM);


	freeMatrix(a, DIM);
	freeMatrix(b, DIM);
	freeMatrix(c, DIM);

	return 0;
}