#include<iostream>
#include<clocale>

using namespace std;

void printMenu()
{
    cout << "MENU" << endl;
    cout << "0 - ����� �� ���������" << endl;
    cout << "1 - �������� � ������ n ��������� ����� � ���������� �� a �� b(n, a, b �������� � ����������)" << endl;
    cout << "2 - ���������� ������" << endl;
    cout << "3 - �������� �������� ������� ������� � �����.���� ����� ��������� �������, ��������� ������� �������� �� ����� �����." << endl;
    cout << "4 - ����������� ����� ������ �� 1" << endl;
    cout << "5 - ���������� ��� ��������� �������.n - ������ ��������, ������������ ���������." << endl;
}

void expandArray(int*& arr, int& cap)
{
    //
}

void addElement(int*& arr, int& count, int& cap, int element)
{

    //
}

void addRandomElements(int*& arr, int& count, int& cap, int n, int min, int max)
{
    //
}

void printArray(int* arr, int count)
{
    //
}

void reverseArray(int* arr, int count)
{
    //
}

int swapPairsArray(int* arr, int count)
{
    //
}

int shiftArray(int* arr, int count)
{
    //
}

int shiftPartsArray(int* arr, int count, int n)
{
    //
}

void processChoice(int*& arr, int& count, int& cap, int choice)
{
    switch (choice)
    {
    case 1:
        break;
    case 2:
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