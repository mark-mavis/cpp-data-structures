#pragma once
#include "Node.h"
#include "GraphEdge.h"
#include <iostream>


class DiaGraph {
    int N;
    Node* getAdjListNode(int, int, Node*);


public:
    Node** head;	// Adjacency list as array of pointers
    DiaGraph(graphEdge[], int, int);
    ~DiaGraph();    // Destructor
};

void display_AdjList(Node* ptr, int i);