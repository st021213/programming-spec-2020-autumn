#pragma once
#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	int z;

public:
	//Point(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z){};
	Point(int x = 0, int y = 0, int z = 0);

	Point(const Point& point);

	~Point();

	Point& add(const Point& point);

	Point& operator=(const Point& point);

	void operator*=(int k);

	friend std::ostream& operator<<(std::ostream& out, const Point& point);

	friend Point operator+(const Point& point1, const Point& point2);

	friend Point operator-(const Point& point1, const Point& point2);

	friend Point operator*(const Point& point, const int k);

	friend Point operator*(const int k, const Point& point);

};

