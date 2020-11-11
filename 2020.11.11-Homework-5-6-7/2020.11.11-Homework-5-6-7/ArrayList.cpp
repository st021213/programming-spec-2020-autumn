#include "ArrayList.h"

ArrayList::ArrayList(const ArrayList& list)
{
	count = list.count;
	capacity = list.count;
	data = new int[count];
	for (int i = 0; i < count; data[i] = list.data[i], ++i);
	str = nullptr;
}

ArrayList::~ArrayList()
{
	if (data != nullptr)
	{
		delete[] data;
	}
	if (str != nullptr)
	{
		delete[] str;
	}
}

bool ArrayList::indexValid(int index)
{
	return (index > -1 && index < count);
}

void ArrayList::expand(int addedLength)
{
	size_t newCapacity = capacity + (addedLength < 1 ? capacity : addedLength);
	int* newData = new int[newCapacity];
	for (size_t i = 0; i < capacity; newData[i] = data[i], ++i);
	capacity = newCapacity;
	delete[] data;
	data = newData;
}

int ArrayList::numLength(int number)
{
	if (number < 0)
	{
		return 1 + numLength(-number);
	}

	int result = 1;
	while (number > 9)
	{
		++result;
		number /= 10;
	}
	return result;
}

void ArrayList::addToStr(int& index, char symbol)
{
	str[index] = symbol;
	index++;
	//str[index++] = symbol;
}

void ArrayList::addToStr(int& index, int number)
{
	if (number < 0)
	{
		addToStr(index, '-');
		return addToStr(index, -number);
	}
	int len = numLength(number);
	index += len;
	for (int i = 0; i < len; ++i, number /= 10)
	{
		str[index - 1 - i] = '0' + (number % 10);
	}
}

bool ArrayList::add(int element)
{
	if (capacity == count)
	{
		expand();
	}
	data[count++] = element;
	return true;
}

bool ArrayList::add(int index, int element)
{
	if (index == count)
	{
		return add(element);
	}
	if (!indexValid(index))
	{
		return false;
	}

	if (capacity == count)
	{
		expand();
	}
	for (int i = count; i > index; ++i)
	{
		data[i] = data[i - 1];
	}

	data[index] = element;
	++count;
	return true;
}

bool ArrayList::addAll(ArrayList& list)
{
	for (int i = 0; i < list.count; i++)
	{
		add(list.data[i]);
	}
	return true;
}

bool ArrayList::addAll(int index, ArrayList& list)
{
	if (index == count)
	{
		return addAll(list);
	}

	if (!indexValid(index))
	{
		return false;
	}

	for (int i = list.length() - 1; i >= 0; --i)
	{
		add(index, list.data[i]);
	}
}

void ArrayList::clear()
{
	count = 0;
	if (data != nullptr)
	{
		delete[] data;
		data = new int[10];
		capacity = 10;
	}
	if (str != nullptr)
	{
		delete[] str;
		str = nullptr;
	}
}

bool ArrayList::contains(int element)
{
	for (int i = 0; i < count; ++i)
	{
		if (data[i] == element)
		{
			return true;
		}
	}
	return false;
}

int ArrayList::get(int index)
{
	if (!indexValid(index))
	{
		return -1;
	}
	return data[index];
}

bool ArrayList::set(int index, int element)
{
	if (!indexValid(index))
	{
		return false;
	}
	data[index] = element;
	return true;
}

int ArrayList::indexOf(int element)
{
	for (int i = 0; i < count; ++i)
	{
		if (data[i] == element)
		{
			return i;
		}
	}
	return -1;
}

bool ArrayList::isEmpty()
{
	return count > 0;
}

//Reverse Poland Notation - обратная польская нотация
//(4 + 2) * 3 - 7 * 5 -> 4 2 + 3 * 7 5 * -
bool ArrayList::remove(int index)
{
	if (!indexValid(index))
	{
		return false;
	}

	for (int i = index; i < count - 1; ++i)
	{
		data[i] = data[i + 1];
	}
	--count;
	return true;
}

bool ArrayList::swap(int index1, int index2)
{
	if (!indexValid(index1) || !indexValid(index2))
	{
		return false;
	}
	int x = data[index1];
	data[index1] = data[index2];
	data[index2] = x;
	return true;
}

int ArrayList::length()
{
	return count;
}

char* ArrayList::toString()
{
	if (str != nullptr)
	{
		delete[] str;
		str = nullptr;
	}

	int x = numLength(capacity);
	int length = 5 + numLength(count) + numLength(capacity);
	if (count == 0)
	{
		length += 2;
	}


	for (int i = 0; i < count; ++i)
	{
		length += numLength(data[i]) + 2;
	}
	str = new char[length];
	int index = 0;
	addToStr(index, '[');
	addToStr(index, count);
	addToStr(index, '/');
	addToStr(index, capacity);
	addToStr(index, ']');
	addToStr(index, ' ');
	addToStr(index, '{');

	for (int i = 0; i < count - 1; ++i)
	{
		addToStr(index, data[i]);
		addToStr(index, ',');
		addToStr(index, ' ');
	}
	if (count != 0)
	{
		addToStr(index, data[count - 1]);
	}

	addToStr(index, '}');
	addToStr(index, '\0');

	return str;
}

//  0 1010110 == 86
//  1 1010110 != -86
//  1 0101001
//  1 0101010 == -86
//  0 1010110 == 86
//1 0 0000000 == 0
// IEEE float double

void ArrayList::operator+=(int item)
{
	add(item);
}

void ArrayList::operator-=(int item)
{
	if (contains(item))
	{
		remove(indexOf(item));
	}
}

ArrayList& ArrayList::operator=(const ArrayList& list)
{
	if (&list != this)
	{
		if (data != nullptr)
		{
			delete[] data;
		}
		if (str != nullptr)
		{
			delete[] data;
			str = nullptr;
		}
		count = list.count;
		capacity = list.count;
		data = new int[count];
		for (int i = 0; i < count; data[i] = list.data[i], ++i);
	}
	return *this;
}

int& ArrayList::operator[](int index)
{
	if (index < 0)
	{
		index = 0;
	}
	if (index > count)
	{
		index = count;
	}
	if (count == index)
	{
		count++;
		return data[index];
	}
	return data[index];

}

ArrayList operator+(const ArrayList& list, int item)
{
	ArrayList result(list);
	//result = list;
	result.add(item);
	return result;
}

ArrayList operator+(int item, const ArrayList& list)
{
	ArrayList result(list);
	//result = list;
	result.add(0, item);
	return result;
}

ArrayList operator+(const ArrayList& list1, const ArrayList& list2)
{
	ArrayList result(list1);
	for (int i = 0; i < list2.count; ++i)
	{
		result.add(list2.data[i]);
	}
	return result;
}

ArrayList operator-(const ArrayList& list, int item)
{
	int index = -1;
	for (int i = list.count - 1; i > 0; --i)
	{
		if (list.data[i] == item)
		{
			index = i;
			break;
		}
	}
	ArrayList result(list);
	result.remove(index);
	return result;
}

ArrayList operator-(int item, const ArrayList& list)
{
	int index = -1;
	for (int i = 0; i < list.count; ++i)
	{
		if (list.data[i] == item)
		{
			index = i;
			break;
		}
	}
	ArrayList result(list);
	result.remove(index);
	return result;
}

std::ostream& operator<<(std::ostream& stream, const ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << " EMPTY ";
	}
	for (int i = 0; i < list.count; ++i)
	{
		stream << list.data[i];
		if (i != list.count - 1)
		{
			stream << ", ";
		}
	}
	stream << "}";
	return stream;
}
