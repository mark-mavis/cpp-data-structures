#pragma once
#include "Node.h"
#include "GraphEdge.h"

class DiaGraph {
    int N;
    Node* getAdjListNode(int, int, Node*);
public:
    Node** head;	//Adjacency list as array of pointers
    DiaGraph(graphEdge[], int, int);
    // Destructor
    ~DiaGraph();
};