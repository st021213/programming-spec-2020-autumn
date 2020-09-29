#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	//считывать данные в массив до введения 0
	//после - вывести массив на экран
	int cap = 10;
	int* a = new int[cap];
	/*count - количество элементов в массиве
	совпадает с номером элемента
	который находится после последнего
	*/
	int count = 0;
	while (true)
	{
		int x = 0;
		cin >> x;
		if (x == 0)
		{
			break;
		}
		if (count == cap) {
			//expand
			cap *= 2;
			int* temp = new int[cap];
			for (int i = 0; i < count; ++i)
			{
				temp[i] = a[i];
			}
			delete[] a;
			a = temp;
		}
		a[count] = x;
		count++;
	}

	cout << "[" << count << "/" << cap << "]";
	cout << "{";
	for (int i = 0; i < count; ++i)
	{
		cout << a[i] << (i != count - 1 ? ", " : "");
	}
	cout << "}" << endl;


	delete[] a;
	return EXIT_SUCCESS;
}