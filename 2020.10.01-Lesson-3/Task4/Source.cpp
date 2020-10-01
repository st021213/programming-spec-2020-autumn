#include<iostream>

using namespace std;

struct Array {
	int count;
	int capacity;
	int* data;
	
	void print()
	{
		for (int i = 0; i < count; ++i)
		{
			cout << data[i] << (i == count - 1 ? "\n" : ", ");
		}
	}
};

void print(Array a)
{
	for (int i = 0; i < a.count; ++i)
	{
		cout << a.data[i] << (i == a.count - 1 ? "\n" : ", ");
	}
}

int main()
{
	Array a;
	a.capacity = 10;
	a.count = 4;
	a.data = new int[a.capacity]{ 0 };
	print(a);

	a.print();
	
	return EXIT_SUCCESS;
}