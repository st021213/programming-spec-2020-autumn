#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int cap = 10; //capacity - ���������� �����������
	int* a = new int[cap]; //��������� ������ � ����� �++
	delete[] a;

	//��������� ������ �� ������������ ������ � ����� �
	a = (int*)malloc(sizeof(int) * cap);
	free(a);
	a = (int*)calloc(cap, sizeof(int));
	free(a);

	while (1) malloc(1);


	return EXIT_SUCCESS;
}