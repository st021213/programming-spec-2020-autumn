#include<iostream>
#include<clocale>

using namespace std;

void printMenu()
{
	cout << "MENU" << endl;
	cout << "0 - Выход из программы" << endl;
	cout << "1 - Добавить число в массив" << endl;
	cout << "2 - Вывести массив на экран" << endl;
	cout << "3 - Найти номер максимального элемента массива" << endl;
	cout << "4 - Найти минимальный элемент массива" << endl;
	cout << "5 - Посчитать сумму элементов массива" << endl;
	cout << "6 - Вывести массив в обратном порядке" << endl;
}

void expandArray(int*& arr, int& cap) //сигнатура функции
{
	int* temp = new int[cap * 2]; // 1 шаг - выделение новой памяти
	for (int i = 0; i < cap; ++i)
	{
		temp[i] = arr[i]; // 2 шаг - переписывание
	}
	delete[] arr; //3 шаг - удаление
	arr = temp; //4 шаг - присваиваем адрес нового места
	cap *= 2;
}

/// <summary>
/// Добавление элемента к массиву
/// </summary>
/// <param name="arr">адрес начала массива</param>
/// <param name="count">количество элементов в массиве</param>
/// <param name="cap">вместительность массива</param>
/// <param name="element">добавляемый элемент</param>
void addElement(int*& arr, int& count, int& cap, int element)
{
	if (count == cap)
	{
		expandArray(arr, cap);
	}
	arr[count] = element;
	count++;
}

void printArray(int* arr, int count)
{
	cout << "{";
	if (count == 0)
	{
		cout << "EMPTY";
	}
	for (int i = 0; i < count; ++i)
	{
		cout << arr[i] << (i == count - 1 ? "" : ", ");
	}
	cout << "}";
}

void reversePrintArray(int* arr, int count)
{
	cout << "{";
	for (int i = 0; i < count; ++i)
	{
		cout << arr[count - 1 - i] << (i == count - 1 ? "" : ", ");
	}
	cout << "}";
}

int maxIndex(int* arr, int count)
{
	int result = 0;
	for (int i = 0; i < count; ++i)
	{
		if (arr[i] > arr[result])
		{
			result = i;
		}
	}
	return result;
}

int minElement(int* arr, int count)
{
	int result = arr[0];
	for (int i = 0; i < count; ++i)
	{
		if (arr[i] > result)
		{
			result = arr[i];
		}
	}
	return result;
}

int sum(int* arr, int count)
{
	int result = 0;
	for (int i = 0; i < count; ++i)
	{
		result += arr[i];
	}
	return result;
}

void processChoice(int*& arr, int& count, int& cap, int choice)
{
	switch (choice)
	{
	case 1:
	{
		int x = 0;
		cin >> x;
		addElement(arr, count, cap, x);
	}
	break;
	case 2:
	{
		printArray(arr, count);
	}
	break;
	case 3:
	{
		cout << maxIndex(arr, count);
	}
	break;
	case 4:
	{
		cout << minElement(arr, count);
	}
	break;
	case 5:
	{
		cout << sum(arr, count);
	}
	break;
	case 6:
	{
		reversePrintArray(arr, count);
	}
	break;
	}
}



int main()
{
	setlocale(LC_ALL, "Russian");
	int choice = 0;
	int capacity = 10;
	int count = 0;
	int* arr = new int[capacity];
	do
	{
		system("cls");
		printMenu();
		cin >> choice;
		processChoice(arr, count, capacity, choice);
		system("pause");
	} while (choice != 0);
	delete[] arr;
	return 0;
}