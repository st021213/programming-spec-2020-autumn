#include<iostream>

using namespace std;

struct Point
{
	int x;
	int y;

	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
	~Point()
	{

	}

	int numLength(int number)
	{
		int result = 1;
		while (number > 9)
		{
			number /= 10;
			result++;
		}
		return result;
	}

	void addSymbol(char* str, int& index, char symbol)
	{
		str[index] = symbol;
		++index;
	}

	void addNumber(char* str, int& index, int number)
	{
		int length = numLength(number);
		for (int i = 0; i < length; ++i)
		{
			int digit = number % 10;
			// 123 -> "abc"
			//        "abc  3"   
			//        "abc 23"  
			//        "abc123"
			//'5' = '0' + 5;
			str[index + length - 1 - i] = '0' + digit;
			number /= 10;
		}
		index += length;
	}

	char* toString()
 	{
		int length = 5 + numLength(x) + numLength(y); // 5 -> (, )\0
		char* str = new char[length];
		int index = 0;
		addSymbol(str, index, '(');
		addNumber(str, index, x);
		addSymbol(str, index, ',');
		addSymbol(str, index, ' ');
		addNumber(str, index, y);
		addSymbol(str, index, ')');
		addSymbol(str, index, '\0');
		return str;
	}
};

int main()
{
	Point p(123, 12);
	cout << "(" << p.x << "; " << p.y << ")" <<  endl;
	cout << p.toString() << endl;
	return 0;
}