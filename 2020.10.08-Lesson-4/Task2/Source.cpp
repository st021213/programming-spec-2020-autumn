#include<iostream>
#include<ctime>
#include"ArrayList.h"

int main()
{
	srand(time(0));
	ArrayList a;
	a.print();
	int x = 10;
	for (int i = 0; i < 15; ++i)
	{
		int x = 0;
		std::cin >> x;
		a.push_back(x);
		a.print();
	}
	std::cout << x << std::endl;

	return 0;
}