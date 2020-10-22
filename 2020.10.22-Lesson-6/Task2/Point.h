class Point
{
private:
	int x;
	int y;
	char* str;

public:
	Point(int x = 0, int y = 0) : x(x), y(y), str(nullptr) {}
	//Point(Point& point) : x(point.x), y(point.y), str(point.str) {}//конструктор копирования по умолчанию
	Point(const Point &point)
	{
		x = point.x;
		y = point.y;
		str = nullptr;
	}
	~Point();

	char* toString();

	int getX();
	int getY();

	void setX(int xx);
	void setY(int yy);

	friend Point operator+(Point p1, Point p2);
	friend Point operator-(Point& p1, Point& p2);
	friend Point operator*(Point& p1, int x);
	friend Point operator*(int x, Point& p1);
	Point& operator=(const Point& p);

private:
	int numLength(int number);
	void addToStr(int& index, char symbol);
	void addToStr(int& index, int number);
};