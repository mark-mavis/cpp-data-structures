#include "DiaGraph.h"
#include "GraphEdge.h"


Node* DiaGraph::getAdjListNode(int val, int weight, Node* head) {
	Node* newNode = new Node;
	newNode->value = val;
	newNode->cost = weight;
	newNode->next = head;
	return newNode;
}
DiaGraph::DiaGraph(graphEdge edges[], int n, int N) {
    // allocate new node
    head = new Node * [N]();
    this->N = N;
    // initialize head pointer for all vertices
    for (int i = 0; i < N; ++i)
        head[i] = nullptr;
    // construct directed graph by adding edges to it
    for (unsigned i = 0; i < n; i++) {
        int start_ver = edges[i].start_ver;
        int end_ver = edges[i].end_ver;
        int weight = edges[i].weight;
        // insert in the beginning
        Node* newNode = getAdjListNode(end_ver, weight, head[start_ver]);

        // point head pointer to new node
        head[start_ver] = newNode;
    }
}
DiaGraph::~DiaGraph() {
    for (int i = 0; i < N; i++) {
        delete[] head[i];
    }
    delete[] head;
}