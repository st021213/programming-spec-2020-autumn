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
		cout << "a ������ b";
	}
	else if (a == b)
	{
		cout << "a ����� b" << endl;
	}
	else
	{
		cout << "a ������ b" << endl;
	}
	//cout << "\" \n \\ \t" << endl;
	cout << (a > b ? "a ������ b" : a < b ? "a ������ b" : "a ����� b");
	int c = (a > b ? a : b);
	a %= 7;
	if (a == 1)
	{
		cout << "�����������";
	}
	if (a == 2)
	{
		cout << "�������";
	}
	if (a == 3)
	{
		cout << "�����";
	}
	if (a == 4)
	{
		cout << "�������";
	}
	if (a == 5)
	{
		cout << "�������";
	}
	if (a == 6)
	{
		cout << "�������";
	}
	if (a == 0) {
		cout << "�����������";
	}

	switch (a) {
	case 1:
		cout << "�����������" << endl;
		break;
	case 2:
		cout << "�������" << endl;
		break;
	case 3:
		cout << "�����" << endl;
		break;
	case 4:
		cout << "�������" << endl;
		break;
	case 5:
		cout << "�������" << endl;
		break;
	case 6:
		cout << "�������" << endl;
		break;
	default:
		cout << "�����������" << endl;
		break;
	}
	return EXIT_SUCCESS;
}