#include<iostream>
#include<string>

using namespace std;

void trim(string& str)
{
	int startIndex = 0;
	while (str[startIndex] == ' ')
	{
		startIndex++;
	}
	str = str.substr(startIndex);
}

bool isDigit(char symbol)
{
	return symbol >= '0' && symbol <= '9';
}

int stringToInt(string& str)
{
	int result = 0;
	for (int i = 0; str[i] != '\0' && isDigit(str[i]); ++i)
	{
		result = 10 * result + str[i] - '0';
	}
	return result;
}

int main()
{
	string str;
	getline(cin, str);
	trim(str);
	cout << "\'" << str << "\'" << endl;

	int number = stringToInt(str);
	cout << number;

	return 0;
}