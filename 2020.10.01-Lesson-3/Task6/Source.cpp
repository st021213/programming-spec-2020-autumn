#include<iostream>
#include<cstdlib>

using namespace std;

struct Array {
	int count;
	int capacity;
	int* data;

	Array(int c = 0)
	{
		init(c);
	}

	Array(int initCount, int initCapacity)
	{
		capacity = (initCapacity > initCount ? initCapacity : initCount);
		count = initCount;
		data = new int[capacity] { 0 };
		for (int i = 0; i < count; ++i)
		{
			data[i] = rand() % 90 + 10;
		}
	}

	~Array()
	{
		//cout << "destruct" << endl;
		free();
	}

	void init(int initCount = 0)
	{
		capacity = (10 > initCount ? 10 : initCount);
		count = initCount;
		data = new int[capacity] { 0 };
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
	Array a(4);
	a.print();

	Array b(7, 20);
	b.print();

	return EXIT_SUCCESS;
}