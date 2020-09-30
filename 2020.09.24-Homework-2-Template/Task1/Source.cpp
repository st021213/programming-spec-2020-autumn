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

void expandArray(int*& arr, int& cap)
{
    //
}

void addElement(int*& arr, int& count, int& cap, int element)
{ 

    //
}

void printArray(int* arr, int count)
{
    //
}

void reversePrintArray(int* arr, int count)
{
    //
}

int maxIndex(int* arr, int count)
{
    //
}

int minElement(int* arr, int count)
{
    //
}

int sum(int* arr, int count)
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