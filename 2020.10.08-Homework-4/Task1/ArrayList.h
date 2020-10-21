#pragma once
#include<iostream>

using namespace std;

struct ArrayList {
	int count;
	int capacity;
	int* data;
		
	//конструкторы
	ArrayList();
	ArrayList(int capacity);
		
	//деструктор
	~ArrayList();

	//методы					   
	/// <summary>
	/// добавляет элемент в конец
	/// </summary>
	/// <param name="element">добавляемый элемент</param>
	/// <returns></returns>
	bool add(int element);

	/// <summary>
	/// добавляет элемент в позицию index, все последующие элементы сдвигаются на 1 вправо
	/// </summary>
	/// <param name="index">индекс вставляемого элемента</param>
	/// <param name="element">вставляемый элемент</param>
	/// <returns>true, если все прошло хорошо, false - если возникли проблемы</returns>
	bool add(int index, int element);
	
	/// <summary>
	/// добавляет все элементы из списка list в конец
	/// </summary>
	/// <param name="list">добавляемый список</param>
	/// <returns>true, если получилось добавить, false - если не получилось</returns>
	bool addAll(ArrayList& list);
	
	/// <summary>
	/// добавляет все элементы из списка list, начиная с позиции index.
	/// все последующие элементы сдвигаются вправо
	/// </summary>
	/// <param name="list">добавляемый список</param>
	/// <returns>true, если получилось добавить, false - если не получилось</returns>
	bool addAll(int index, ArrayList& list);

	/// <summary>
	/// удалить все элементы из списка
	/// </summary>
	void clear();
	
	/// <summary>
	/// содержится ли элемент в списке
	/// </summary>
	/// <param name="element">искомый элемент</param>
	/// <returns>true - содержится, false - не содержится</returns>
	bool contains(int element);

	/// <summary>
	/// получить элемент по индексу
	/// </summary>
	/// <param name="index">индекс запрашиваемого элемента</param>
	/// <returns>data[index], если индекс корректен, -1 - если индекс некорректен</returns>
	int get(int index);

	/// <summary>
	/// поиск элемента в списке
	/// </summary>
	/// <param name="element">искомый элемент</param>
	/// <returns>индекс элемента, если он найден, -1 - если не найден</returns>
	int indexOf(int element);
	
	/// <summary>
	/// проверка списка на пустоту
	/// </summary>
	/// <returns>true - если список пуст, false - если есть хотя бы 1 элемент</returns>
	bool isEmpty();

	/// <summary>
	/// Вывод списка в формате [count/capacity] {el1, el2, el3, ...}
	/// </summary>
	void print();

	/// <summary>
	/// удаление элемента из списка
	/// </summary>
	/// <param name="index">индекс удаляемого элемента</param>
	/// <returns>true - все прошло хорошо, false - возникли проблемы</returns>
	bool remove(int index);

	/// <summary>
	/// поменять местами элементы
	/// </summary>
	/// <param name="index1">индекс первого элемента</param>
	/// <param name="index2">индекс второго элемента</param>
	/// <returns>true - все прошло хорошо, false - возникли проблемы</returns>
	bool swap(int index1, int index2);

};