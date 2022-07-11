#ifndef GRAPH_H_INCLUDED

#define GRAPH_H_INCLUDED
#include <iostream>

#define First(G) ((G).First)
#define id(P) (P)->id
#define jarak(P) (P)->jarak
#define idNode(P) (P)->idNode
#define nextNode(P) (P)->nextNode
#define firstEdge(P) (P)->firstEdge
#define nextEdge(P) (P)->nextEdge

using namespace std;

typedef struct Node* adrNode;
typedef struct Edge* adrEdge;

struct Node {
    char idNode;
    adrNode nextNode;
    adrEdge firstEdge;
};

struct Edge {
    char id;
    int jarak;
    adrEdge nextEdge;
};

struct Graph {
    adrNode First;
};

void createNode(char X, adrNode &P);
void createGraph(Graph &G);
void showPeta(Graph G);
void insertNewNode(Graph &G, char idNode);
adrNode findNode(Graph G, char idNode);
void connecting(Graph &G, char node1, char node2, int jarak);
int biayaPerbaikanJalan(Graph G);

#endif // GRAPH_H_INCLUDED
