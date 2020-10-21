#pragma once

#include<iostream>

struct ArrayList {
	/* поля */
	int count;
	int capacity;
	int* data;
	char* str;

	/* конструкторы */
	ArrayList(); //конструктор по умолчанию
	ArrayList(int cap); //конструктор с параметрами

						/* деструктор */
	~ArrayList();

	void push_back(int element); //добавление в конец
	void print(); //вывод массива
	char* toString(); //преобазование в строку
};