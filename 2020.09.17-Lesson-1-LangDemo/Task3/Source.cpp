#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	//IDE - 
	//SDK - 
	//SOLID - 
	//RAII -

	int a = 0;
	int b = 0;
	cin >> a >> b;
	if (a < b)
	{
		cout << "a меньше b";
	}
	else if (a == b)
	{
		cout << "a равно b" << endl;
	}
	else
	{
		cout << "a больше b" << endl;
	}
	//cout << "\" \n \\ \t" << endl;
	cout << (a > b ? "a больше b" : a < b ? "a меньше b" : "a равно b");
	int c = (a > b ? a : b);
	a %= 7;
	if (a == 1)
	{
		cout << "Понедельник";
	}
	if (a == 2)
	{
		cout << "Вторник";
	}
	if (a == 3)
	{
		cout << "Среда";
	}
	if (a == 4)
	{
		cout << "Четверг";
	}
	if (a == 5)
	{
		cout << "Пятница";
	}
	if (a == 6)
	{
		cout << "Суббота";
	}
	if (a == 0) {
		cout << "Воскресенье";
	}

	switch (a) {
	case 1:
		cout << "Понедельник" << endl;
		break;
	case 2:
		cout << "Вторник" << endl;
		break;
	case 3:
		cout << "Среда" << endl;
		break;
	case 4:
		cout << "Четверг" << endl;
		break;
	case 5:
		cout << "Пятница" << endl;
		break;
	case 6:
		cout << "Суббота" << endl;
		break;
	default:
		cout << "Воскресенье" << endl;
		break;
	}
	return EXIT_SUCCESS;
}