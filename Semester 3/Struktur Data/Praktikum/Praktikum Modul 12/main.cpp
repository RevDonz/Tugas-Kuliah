#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    graph G;

    initGraph(G);
    buildGraph(G);
    cout << endl;

    cout << "Graph Kosong" << endl;
    printGraph(G);
    cout << endl;

    cout << "Graph Berisi Edge" << endl;
    addEdge(G, 'A', 'C', 12);
    addEdge(G, 'A', 'D', 60);
    addEdge(G, 'B', 'A', 10);
    addEdge(G, 'C', 'B', 20);
    addEdge(G, 'C', 'D', 32);
    addEdge(G, 'E', 'A', 7);
    printGraph(G);

    return 0;
}
