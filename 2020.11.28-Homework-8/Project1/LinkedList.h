#pragma once
#include<ostream>

struct Node {
public:
	int data;
	Node* next;
	Node(int data, Node* next = nullptr) : data(data), next(next) {}
};

class LinkedList
{
private:
	int count;
	Node* head;
	Node* tail;

public:
	LinkedList() : count(0), head(nullptr), tail(nullptr) {}
	LinkedList(const LinkedList& list);
	~LinkedList();

private:
	bool indexValid(int index);
	Node* extractHeadNode();
	Node* extractTailNode();
	Node* extractNode(int index);
	void insertHeadNode(Node* node);
	void insertTailNode(Node* node);
	void insertNode(int index, Node* node);


public:
	int length();

	bool addToHead(int element);

	bool addToTail(int element);

	bool add(int index, int element);

	int get(int index);

	bool set(int index, int element);

	int& operator[](int index);

	LinkedList& operator=(const LinkedList& list);

	friend std::ostream& operator<<(std::ostream& stream, const LinkedList list);

	/// <summary>
	/// ������� ������ ������
	/// </summary>
	/// <returns>�������� ��������, ��������� � ������</returns>
	int extractHead();

	/// <summary>
	/// ������� ����� ������
	/// </summary>
	/// <returns>�������� ��������, ��������� � �����</returns>
	int extractTail();

	/// <summary>
	/// ������� �������, ������� �� ����� index
	/// </summary>
	/// <returns>�������� ��������, ��������� �� ����� index</returns>
	int extract(int index);

	/// <summary>
	/// ������� �������
	/// </summary>
	/// <param name="">������ ���������� ��������</param>
	void operator-=(int index);

	/// <summary>
	/// ����� ��������
	/// </summary>
	/// <param name="">�������� ��������</param>
	/// <returns>-1, ���� �������� � ������ ���</returns>
	int indexOf(int element);

	/// <summary>
	/// ���������� �� ������� � ������. � ������� ����� �������� ����� �������
	/// </summary>
	/// <param name="">�������� ��������</param>
	bool contains(int element);

	/// <summary>
	/// �������� ��� �������� �������.
	/// ������������ �������� ��������� ������.
	/// ����� ������ ������ �������� ����� next.
	/// </summary>
	/// <param name="">������ ������� ��������</param>
	/// <param name="">������ ������� ��������</param>
	/// <returns>false - ���� ������� ���� �����������</returns>
	bool swap(int, int);
};

