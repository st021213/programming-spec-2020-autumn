#pragma once

class LinkedList
{
private:
	//��������� �� ������ � ����� ������, ����� ������

public:
	//����������� �� ��������� � ����������� �����������

private:
	//indexValid(int);

public:
	//int length();
	//bool addToHead(int);
	//bool addToTail(int);
	//bool add(int, int);
	//int get(int);
	//bool set(int, int);
	//operator[](int);
	//operator<<(ostream&, const LinkedList);
	//operator += (int);

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
	void operator-=(int);

	LinkedList& operator=(LinkedList);

	/// <summary>
	/// ����� ��������
	/// </summary>
	/// <param name="">�������� ��������</param>
	/// <returns>-1, ���� �������� � ������ ���</returns>
	int indexOf(int);

	/// <summary>
	/// ���������� �� ������� � ������. � ������� ����� �������� ����� �������
	/// </summary>
	/// <param name="">�������� ��������</param>
	bool contains(int);

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

