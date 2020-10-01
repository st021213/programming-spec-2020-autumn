#include<iostream>
using namespace std;

int main()
{
	int* data = new int[10 + 2] {0};
	*(data) = 5; //data[0]
	*(data + 1) = 10; //data[1]
	data += 2;
	for (int i = 0; i < *(data - 2) /*count*/; ++i)
	{
		cout << *(data + i) << " ";
	}
	cout << endl;

	data -= 2;
	delete[] data;
	return EXIT_SUCCESS;
}