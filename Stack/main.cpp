#include "Stack.h"

int main() {
	Stack arr(5);
	arr.Push('H');
	arr.Push('E');
	arr.Push('L');
	arr.Push('L');
	arr.Push('L');
	arr.Print();
	arr.Push('L');
	arr.Pop();
	arr.Print();
	arr.Pop();
	arr.Pop();
	arr.Pop();
	arr.Pop();
	arr.Pop();

	return 0;
}