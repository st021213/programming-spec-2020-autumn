#include<iostream>
#include<ctime>
#include"ArrayList.h"

int numberLength(int n)
{
	int len = 0;
	while (n != 0)
	{
		++len;
		n /= 10;
	}
	return len;
}

int arraySymbolsLength(ArrayList& arr)
{
	int len = 6; //[/]{}\0
	for (int i = 0; i < arr.count; ++i)
	{
		len += numberLength(arr.data[i]) + 2; //длина числа + ", "
	}
	len -= 2; //отсутствие ", " у последнего
	return len;
}

void addSymbol(char* str, int& pos, char symbol)
{
	str[pos] = symbol;
	pos++;
}

void addNumber(char* str, int& pos, int number)
{
	int numLen = numberLength(number);
	int current = 0;
	while (number != 0)
	{
		//[5/10]{123, 
		str[pos + numLen - current] = '0' + number % 10;
		++current;
		number /= 10;
	}
	pos += numLen;
}

char* arrayToString(ArrayList& arr)
{
	int len = arraySymbolsLength(arr);
	char* result = new char[len];
	int index = 0;
	addSymbol(result, index, '[');
	addNumber(result, index, arr.count);
	addSymbol(result, index, '/');
	addNumber(result, index, arr.capacity);
	addSymbol(result, index, ']');
	result[index] = '\0';
	return result;
}

int main()
{
	srand(time(0));
	ArrayList a;
	for (int i = 0; i < 15; ++i)
	{
		a.push_back(rand() % 90 + 10);
	}


	return 0;
}