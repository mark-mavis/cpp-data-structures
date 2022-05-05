#pragma once
#include <string>

class Stack {
private:
	int Top;
	int size;
	char* arr;
public:
	Stack(int);
	int Push(char);
	int Pop();
	bool IsEmpty();
	bool IsFull();
	char Peek();
	void Print();
};

bool ValidateParentheses(std::string);