#pragma once
#include <iostream>
#include<iomanip>
using namespace std;

class Vector {
private:
	int cur_size;
	int* mas;
	int pos;
	int buf_size;
	int *els;
public:
	//default constructor
	Vector() {
		cur_size = 0;
		buf_size = 0;
		mas = new int[100];
		els = nullptr;
	}
	Vector(int size) {
		this->cur_size = size;
		this->buf_size = size;
		this->els = new int[buf_size];
		for (int i = 0;i < buf_size;i++)
		{
			els[i] = rand()%10+1;
		}
	}
	//constructor COPY
	Vector(const Vector&src) {
		this->cur_size = src.cur_size;
		this->buf_size = src.cur_size;
		this->els = new int[cur_size];
		for (int i = 0;i < cur_size;i++){
			els[i] = src.els[i];
		}
	}

	void push_back(const int &e){
		if (cur_size >= buf_size) {		
			int *temp;
			buf_size *= 2;
			temp = new int[buf_size];
			for (int i = 0; i < cur_size; i++)
			{
				temp[i] = els[i];
			}
			delete[]els;
			els = temp;
		}
		els[cur_size++] = e;
	}
	void pop_back() {
		if (cur_size > 0)
			cur_size--;
	}

	int&at(int pos)
	{
		return els[pos - 1];
	}
	//destructor
	~Vector() {
		delete[] els;
		els = nullptr;
		delete[] mas;
	}

	void PushMass(int value)
	{
		if (pos>100) cout << "Выход за границы массива!!!" << endl;
		else
		{
			mas[pos] = value;
			pos++;
		}
	}
	void PopMass(int position)
	{
		if (position<0 || position>100) cout << "Введите корректный индекс!!!" << endl;
		else cout << mas[position] << endl;
	}
	void ShowMass()
	{
		for (int i = 0;i<pos;i++)
			cout << mas[i] << " ";
		cout << endl;
	}
};