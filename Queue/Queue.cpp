#include "Queue.h"
Queue::Queue(int sz) : size{ sz }, back{ -1 }, arr{ new int[sz] }{}

int Queue::Enqueue(char c) {
	if (!IsFull()) {
		printf("Pushing %c to Queue\n", c);
		back++;
		arr[back] = c;
		return 1;
	}
	printf("Queue Full\n");
	return 0;
}
void Queue::Dequeue() {
	for (int i = 1; i < size; i++) {
		arr[i - 1] = arr[i];
		arr[i] = 0;
	}
	back--;
}
void Queue::Print() {
	for (int i = 0; i < back+1; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
}
char Queue::Peek() {
	if (!IsEmpty()) {
		printf("Peeking %c", arr[0]);
		return arr[0];
	}
	printf("Queue is empty");
	return 0;
}
bool Queue::IsEmpty() {
	if (back == -1) return true;
	return false;
}
bool Queue::IsFull() {
	if (back != size - 1) return false;
	return true;
}