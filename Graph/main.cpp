#include "GraphEdge.h"
#include "DiaGraph.h"



int main()
{
    // Array of Graph Edges.
    graphEdge edges[] = {
        // (x, y, w) -> edge from x to y with weight w
        {0,1,2},{0,2,4},{1,4,3},{2,3,2},{3,1,4},{4,3,3}
    };


    int N = 6;          // Number of vertices in the graph
    int n = sizeof(edges) / sizeof(edges[0]);   // calculate number of edges
    DiaGraph diagraph(edges, n, N);             // construct graph
    // print adjacency list representation of graph
    std::cout << "Graph adjacency list " << std::endl << "(start_vertex, end_vertex, weight):" << std::endl;
    for (int i = 0; i < N; i++)
    {
        // display adjacent vertices of vertex i
        display_AdjList(diagraph.head[i], i);
    }
    return 0;
}