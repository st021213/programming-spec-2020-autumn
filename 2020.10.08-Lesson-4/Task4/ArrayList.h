#pragma once

#include<iostream>

struct ArrayList {
	/* ���� */
	int count;
	int capacity;
	int* data;
	char* str;

	/* ������������ */
	ArrayList(); //����������� �� ���������
	ArrayList(int cap); //����������� � �����������

						/* ���������� */
	~ArrayList();

	void push_back(int element); //���������� � �����
	void print(); //����� �������
	char* toString(); //������������� � ������
};