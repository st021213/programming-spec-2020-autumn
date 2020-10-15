#pragma once
#include<iostream>

using namespace std;

struct ArrayList {

private:
	int count;
	int* data;
	int capacity;

public:

	ArrayList(int capacity = 10) : count(0), capacity(capacity), data(new int[capacity]) {}

	~ArrayList();

	//int count() { return count; }

	bool add(int element);

	//1 2 3 4 5
	//2 19
	//1 2 19 3 4 5
	bool add(int index, int element);

	bool addAll(ArrayList& list);

	bool addAll(int index, ArrayList& list);

	void clear();

	bool contains(int element);

	int get(int index);

	int indexOf(int element);

	bool isEmpty();

	bool remove(int index);

	int swap(int index1, int index2);

	char* toString();

private:
	void expand();
};