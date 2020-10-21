#include"ArrayList.h"

ArrayList::ArrayList()
{
	//printf("Default constructor call\n");
	capacity = 10;
	count = 0;
	data = new int[10];
	str = NULL;
}

ArrayList::ArrayList(int cap)
{
	//printf("Parametrized constructor call\n");
	capacity = cap;
	count = 0;
	data = new int[cap];
	str = NULL;
}

ArrayList::~ArrayList()
{
	//printf("Destructor call %d\n", capacity);
	if (data != NULL)
	{
		delete[] data;
	}
	if (str != NULL)
	{
		delete[] str;
	}
}

void expand(int*& data, int& capacity)
{
	int* newData = new int[capacity * 2];
	for (int i = 0; i < capacity; ++i)
	{
		newData[i] = data[i];
	}
	capacity *= 2;
	delete[] data;
	data = newData;
}

void ArrayList::push_back(int element)
{
	if (count == capacity)
	{
		expand(data, capacity);
	}
	data[count] = element;
	count++;
}

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

int arraySymbolsLength(int* data, int count)
{
	int len = 6; //[/]{}\0
	for (int i = 0; i < count; ++i)
	{
		len += numberLength(data[i]) + 2; //длина числа + ", "
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
		str[pos + numLen - current - 1] = '0' + number % 10;
		++current;
		number /= 10;
	}
	pos += numLen;
}

char* ArrayList::toString()
{
	if (str != NULL)
	{
		delete[] str;
	}
	int len = arraySymbolsLength(data, count);
	str = new char[len];
	int index = 0;
	addSymbol(str, index, '[');
	addNumber(str, index, count);
	addSymbol(str, index, '/');
	addNumber(str, index, capacity);
	addSymbol(str, index, ']');
	addSymbol(str, index, '{');
	for (int i = 0; i < count; ++i)
	{
		addNumber(str, index, data[i]);
		if (i != count - 1)
		{
			addSymbol(str, index, ',');
			addSymbol(str, index, ' ');
		}
	}
	addSymbol(str, index, '}');
	str[index] = '\0';
	return str;
}

void ArrayList::print()
{
	printf("[%d/%d]{", count, capacity);
	if (count == 0)
	{
		printf("EMPTY");
	}
	else
	{
		for (int i = 0; i < count; ++i)
		{
			printf("%d%s", data[i], (i == count - 1 ? "" : ", "));
		}
	}
	printf("}\n");
}