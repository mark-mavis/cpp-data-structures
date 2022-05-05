#pragma once
#include <iostream>

class Queue {
private:
	int back;
	int size;
	int* arr;
public:
	Queue(int);
	int Enqueue(char);
	void Dequeue();
	bool IsEmpty();
	bool IsFull();
	char Peek();
	void Print();
};
