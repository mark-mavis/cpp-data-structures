#include "Queue.h"

int main() {
	Queue queue(5);
	queue.Enqueue('H');
	queue.Enqueue('E');
	queue.Enqueue('L');
	queue.Enqueue('L');
	queue.Enqueue('O');
	queue.Enqueue('H');
	queue.Print();
	queue.Dequeue();
	queue.Print();
	queue.Peek();

}