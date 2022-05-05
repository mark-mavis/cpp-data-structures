#pragma once
#include <string>

class Node {
private:
	int data;
	Node* left;
	Node* right;
public:
	Node(int val);

	friend class BinarySearchTree;
};