#include<iostream>

using namespace std;

struct Array {
	int count;
	int capacity;
	int* data;

	void init(int initCount = 0)
	{
		capacity = (10 > initCount ? 10 : initCount);
		count = initCount;
		data = new int[capacity]{ 0 };
	}

	void print()
	{
		for (int i = 0; i < count; ++i)
		{
			cout << data[i] << (i == count - 1 ? "\n" : ", ");
		}
	}

	void free()
	{
		delete[] data;
	}
};

int main()
{
	Array a;
	a.init(); //a.init(0);
	a.free();
	a.init(12);

	a.print();

	a.free();
	return EXIT_SUCCESS;
}