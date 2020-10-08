#include<iostream>

using namespace std;

struct ArrayList {
	/* ���� */
	int count;
	int capacity;
	int* data;

	/* ������������ */
	ArrayList() //����������� �� ���������
	{
		printf("Default constructor call\n");
		capacity = 10;
		count = 0;
		data = new int[10];
	}
	ArrayList(int cap) //����������� � �����������
	{
		printf("Parametrized constructor call\n");
		capacity = cap;
		count = 0;
		data = new int[cap];
	}

	/* ���������� */
	~ArrayList()
	{
		printf("Destructor call %d\n", capacity);
		delete[] data;
	}
};

int main()
{
	ArrayList a;
	ArrayList b(15);
	ArrayList c(32);

	return 0;
}