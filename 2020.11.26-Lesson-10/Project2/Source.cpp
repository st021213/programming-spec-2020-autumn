#include<iostream>

using namespace std;

int main()
{
	char* chr = new char[10];
	//cout << '\'' << endl; 
	//escape - последовательности
	//'a' - char
	//"a" - char[2] a\0
	//\0 - символ конца строки
	//\n - перевод строки
	//\r - возврат каретки
	//\t - табуляция
	//\" - "
	//\' - '
	//\\ - \ -
	cin >> chr;
	for (int i = 0; chr[i] != '\0'; ++i)
	{
		cout << "[" << i << "]" << chr[i] << endl;
	}
	cin >> chr;
	for (int i = 0; chr[i] != '\0'; ++i)
	{
		cout << "[" << i << "]" << chr[i] << endl;
	}

	cin.getline(chr, 10);
	for (int i = 0; chr[i] != '\0'; ++i)
	{
		cout << "[" << i << "]" << chr[i] << endl;
	}

	cin.getline(chr, 10);
	for (int i = 0; chr[i] != '\0'; ++i)
	{
		cout << "[" << i << "]" << chr[i] << endl;
	}

	return 0;
}