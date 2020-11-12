#pragma once

class LinkedList
{
private:
	//указатели на начало и конец списка, длина списка

public:
	//конструктор по умолчанию и конструктор копирования

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
	/// удалить начало списка
	/// </summary>
	/// <returns>значение элемента, стоявшего в начале</returns>
	int extractHead();

	/// <summary>
	/// удалить хвост списка
	/// </summary>
	/// <returns>значение элемента, стоявшего в конце</returns>
	int extractTail();

	/// <summary>
	/// удалить элемент, стоящий на месте index
	/// </summary>
	/// <returns>значение элемента, стоявшего на месте index</returns>
	int extract(int index);

	/// <summary>
	/// удалить элемент
	/// </summary>
	/// <param name="">индекс удаляемого элемента</param>
	void operator-=(int);

	LinkedList& operator=(LinkedList);

	/// <summary>
	/// поиск элемента
	/// </summary>
	/// <param name="">значение искомого</param>
	/// <returns>-1, если элемента в списке нет</returns>
	int indexOf(int);

	/// <summary>
	/// содержится ли элемент в списке. в функции нужно обойтись одной строкой
	/// </summary>
	/// <param name="">значение элемента</param>
	bool contains(int);

	/// <summary>
	/// поменять два элемента местами.
	/// Переписывать значения элементов нельзя.
	/// Можно только менять значения полей next.
	/// </summary>
	/// <param name="">индекс первого элемента</param>
	/// <param name="">индекс второго элемента</param>
	/// <returns>false - если индексы были некорректны</returns>
	bool swap(int, int);
};

