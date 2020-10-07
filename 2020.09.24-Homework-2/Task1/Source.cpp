#include<iostream>
#include<clocale>

using namespace std;

void printMenu()
{
	cout << "MENU" << endl;
	cout << "0 - ����� �� ���������" << endl;
	cout << "1 - �������� ����� � ������" << endl;
	cout << "2 - ������� ������ �� �����" << endl;
	cout << "3 - ����� ����� ������������� �������� �������" << endl;
	cout << "4 - ����� ����������� ������� �������" << endl;
	cout << "5 - ��������� ����� ��������� �������" << endl;
	cout << "6 - ������� ������ � �������� �������" << endl;
}

void expandArray(int*& arr, int& cap) //��������� �������
{
	int* temp = new int[cap * 2]; // 1 ��� - ��������� ����� ������
	for (int i = 0; i < cap; ++i)
	{
		temp[i] = arr[i]; // 2 ��� - �������������
	}
	delete[] arr; //3 ��� - ��������
	arr = temp; //4 ��� - ����������� ����� ������ �����
	cap *= 2;
}

/// <summary>
/// ���������� �������� � �������
/// </summary>
/// <param name="arr">����� ������ �������</param>
/// <param name="count">���������� ��������� � �������</param>
/// <param name="cap">��������������� �������</param>
/// <param name="element">����������� �������</param>
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