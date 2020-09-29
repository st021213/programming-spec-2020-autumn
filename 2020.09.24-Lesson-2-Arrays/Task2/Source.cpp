#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int cap = 10; //capacity - пропускная способность
	int* a = new int[cap]; //выделение памяти в стиле С++
	delete[] a;

	//выделение памяти на динамический массив в стиле С
	a = (int*)malloc(sizeof(int) * cap);
	free(a);
	a = (int*)calloc(cap, sizeof(int));
	free(a);

	while (1) malloc(1);


	return EXIT_SUCCESS;
}