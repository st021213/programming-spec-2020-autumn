struct Point
{
public:
	int x;
	int y;

private:
	char* str;

public:
	/*
	Point()
	{
		x = 0;
		y = 0;
		str = nullptr;
	}
	*/
	/*
	Point() : x(0), y(0), str(nullptr) {}
	Point(int xx, int yy) : x(xx), y(yy), str(nullptr) {}
	*/
	Point(int x = 0, int y = 0) : x(x), y(y), str(nullptr) {}

	~Point();

	char* toString();

private:
	int numLength(int number);
	void addSymbol(int& index, char symbol);
	void addNumber(int& index, int number);
};