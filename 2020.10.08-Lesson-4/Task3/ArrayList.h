#pragma once

#include<iostream>

struct ArrayList {
	/* ���� */
	int count;
	int capacity;
	int* data;

	/* ������������ */
	ArrayList(); //����������� �� ���������
	ArrayList(int cap); //����������� � �����������

						/* ���������� */
	~ArrayList();

	void push_back(int element); //���������� � �����
	void print(); //����� �������
};