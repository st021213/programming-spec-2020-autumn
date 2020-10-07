#include<iostream>
#include<clocale>
#include<ctime>

using namespace std;

void printMenu()
{
	cout << "MENU" << endl;
	cout << "0 - Выход из программы" << endl;
	cout << "1 - Добавить в массив n случайных чисел в промежутке от a до b(n, a, b вводится с клавиатуры)" << endl;
	cout << "2 - Развернуть массив" << endl;
	cout << "3 - Поменять элементы массива местами в парах.Если число элементов нечетно, последний элемент остается на своем месте." << endl;
	cout << "4 - Циклический сдвиг вправо на 1" << endl;
	cout << "5 - Развернуть две половинки массива.n - индекс элемента, разделяющего половинки." << endl;
	cout << "6 - Вывести массив на экран" << endl;
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

void addElement(int*& arr, int& count, int& cap, int element)
{
	if (count == cap)
	{
		expandArray(arr, cap);
	}
	arr[count] = element;
	count++;
}

void addRandomElements(int*& arr, int& count, int& cap, int n, int min, int max)
{
	for (int i = 0; i < n; ++i)
	{
		addElement(arr, count, cap, rand() % (max - min + 1) + min);
	}
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

void swap(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

void reverseArray(int* arr, int count)
{
	for (int i = 0; i < count / 2; ++i)
	{
		swap(arr[i], arr[count - 1 - i]);
	}
}

void swapPairsArray(int* arr, int count)
{
	//0 1 2 3 4
	//7 8 4 9 5
	for (int i = 1; i < count; i += 2)
	{
		swap(arr[i - 1], arr[i]);
	}
}

void shiftArray(int* arr, int count)
{
	int last = arr[count - 1];
	for (int i = count - 1; i > 1; --i)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = last;
}

void shiftPartsArray(int* arr, int count, int n)
{
	reverseArray(arr, n);
	reverseArray(arr + n, count - n);
}

void processChoice(int*& arr, int& count, int& cap, int choice)
{
	switch (choice)
	{
	case 1:
	{
		int n = 0;
		int min = 0;
		int max = 0;
		cin >> n;
		cin >> min;
		cin >> max;
		addRandomElements(arr, count, cap, n, min, max);
	}
	break;
	case 2:
	{
		reverseArray(arr, count);
	}
	break;
	case 3:
	{
		swapPairsArray(arr, count);
	}
	break;
	case 4:
	{
		shiftArray(arr, count);
	}
	break;
	case 5:
	{
		int n = 0;
		cin >> n;
		shiftPartsArray(arr, count, n);
	}
	break;
	case 6:
	{
		printArray(arr, count);
	}
	break;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
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