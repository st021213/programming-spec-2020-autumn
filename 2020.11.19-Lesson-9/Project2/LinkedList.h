#pragma once
#include<ostream>
struct Node
{
	int data;
	Node* next;
	Node(int data, Node* next = nullptr) : data(data), next(next) {}
};

class LinkedList
{
private:
	Node* head;

public:
	LinkedList() : head(nullptr) {}
	~LinkedList();

private:
	bool indexValid(int index);

public:
	void insert(int index, int element);
	void addHead(int element);
	void addTail(int element);
	int length();
	bool isEmpty();

	void removeHead();
	void remove(int index);
	void removeTail();

	friend std::ostream& operator<<(std::ostream& stream, LinkedList& list);
};

