class ArrayList
{
private:
	int count;
	int capacity;
	int* data;
	char* str;

public:
	ArrayList(int capacity = 10) :count(0), capacity(capacity), data(new int[capacity]), str(nullptr) {}
	ArrayList(const ArrayList& list);
	~ArrayList();

private:
	void expand();
	int numLength(int number);
	void addToStr(int& index, char symbol);
	void addToStr(int& index, int number);

public:
	/// <summary>
	/// ��������� ������� � �����
	/// </summary>
	/// <param name="element">����������� �������</param>
	/// <returns></returns>
	bool add(int element);

	/// <summary>
	/// ��������� ������� � ������� index, ��� ����������� �������� ���������� �� 1 ������
	/// </summary>
	/// <param name="index">������ ������������ ��������</param>
	/// <param name="element">����������� �������</param>
	/// <returns>true, ���� ��� ������ ������, false - ���� �������� ��������</returns>
	bool add(int index, int element);

	/// <summary>
	/// ��������� ��� �������� �� ������ list � �����
	/// </summary>
	/// <param name="list">����������� ������</param>
	/// <returns>true, ���� ���������� ��������, false - ���� �� ����������</returns>
	bool addAll(ArrayList& list);

	/// <summary>
	/// ��������� ��� �������� �� ������ list, ������� � ������� index.
	/// ��� ����������� �������� ���������� ������
	/// </summary>
	/// <param name="list">����������� ������</param>
	/// <returns>true, ���� ���������� ��������, false - ���� �� ����������</returns>
	bool addAll(int index, ArrayList& list);

	/// <summary>
	/// ������� ��� �������� �� ������
	/// </summary>
	void clear();

	/// <summary>
	/// ���������� �� ������� � ������
	/// </summary>
	/// <param name="element">������� �������</param>
	/// <returns>true - ����������, false - �� ����������</returns>
	bool contains(int element);

	/// <summary>
	/// �������� ������� �� �������
	/// </summary>
	/// <param name="index">������ �������������� ��������</param>
	/// <returns>data[index], ���� ������ ���������, -1 - ���� ������ �����������</returns>
	int get(int index);

	/// <summary>
	/// ���������� �������� ��������, ������������ �� ����� index.
	/// </summary>
	/// <param name="index">������ ����������� ��������</param>
	/// <param name="element">����� ��������</param>
	/// <returns>true, ���� ������ ��� ���������, false - ���� ������ ��� �����������</returns>
	bool set(int index, int element);

	/// <summary>
	/// ����� �������� � ������
	/// </summary>
	/// <param name="element">������� �������</param>
	/// <returns>������ ��������, ���� �� ������, -1 - ���� �� ������</returns>
	int indexOf(int element);

	/// <summary>
	/// �������� ������ �� �������
	/// </summary>
	/// <returns>true - ���� ������ ����, false - ���� ���� ���� �� 1 �������</returns>
	bool isEmpty();

	/// <summary>
	/// ������������� ������ � ������ ���� [count/capacity] {el1, el2, el3, ...}
	/// </summary>
	/// <returns>��������������� ������</returns>
	char* toString();

	/// <summary>
	/// �������� �������� �� ������
	/// </summary>
	/// <param name="index">������ ���������� ��������</param>
	/// <returns>true - ��� ������ ������, false - �������� ��������</returns>
	bool remove(int index);

	/// <summary>
	/// �������� ������� ��������
	/// </summary>
	/// <param name="index1">������ ������� ��������</param>
	/// <param name="index2">������ ������� ��������</param>
	/// <returns>true - ��� ������ ������, false - �������� ��������</returns>
	bool swap(int index1, int index2);

	/// <summary>
	/// ���������� ��������� � �������
	/// </summary>
	/// <returns>���� count</returns>
	int length();
};