struct Point
{
public:
	int x;
	int y;

private:
	char* str;

public:
	Point();
	Point(int xx, int yy);

	~Point();

	char* toString();

private:
	int numLength(int number);
	void addSymbol(int& index, char symbol);
	void addNumber(int& index, int number);
};