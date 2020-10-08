#include<iostream>

using namespace std;

struct ArrayList {
	/* поля */
	int count;
	int capacity;
	int* data;

	/* конструкторы */
	ArrayList() //конструктор по умолчанию
	{
		printf("Default constructor call\n");
		capacity = 10;
		count = 0;
		data = new int[10];
	}
	ArrayList(int cap) //конструктор с параметрами
	{
		printf("Parametrized constructor call\n");
		capacity = cap;
		count = 0;
		data = new int[cap];
	}

	/* деструктор */
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