#include "Stack.h"

Stack::Stack(int sz = 0) : size{ sz }, Top{ -1 }, arr{ arr = new char[sz] } {}
int Stack::Push(char c) {
	if (!IsFull()) {
		printf("Pushing %c to stack\n", c);
		Top++;
		arr[Top] = c;
		return 1;
	}
	printf("Stack Full\n");
	return 0;
}
int Stack::Pop() {
	if (!IsEmpty()) {
		printf("Popping %c from Stack\n", arr[Top]);
		arr[Top] = 0;
		Top--;
		return 1;
	}
	printf("Stack Is Empty\n");
	return 0;
}
char Stack::Peek() {
	if (!IsEmpty()) {
		printf("Peek Val: %c", arr[Top]);
		return arr[Top];
	}
	return 0;
}
bool Stack::IsEmpty() { 
	if (Top == -1) return true; 
	return false;
}
bool Stack::IsFull() {
	if (Top != size - 1) return false;
	return true;
}
void Stack::Print() {
	for (int i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
};