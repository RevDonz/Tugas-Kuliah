#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>

using namespace std;

#define idVertex(P) (P)->idVertex
#define nextVertex(P) (P)->nextVertex
#define firstEdge(P) (P)->firstEdge

#define destVertexID(P) (P)->destVertexID
#define weight(P) (P)->weight
#define nextEdge(P) (P)->nextEdge
#define firstVertex(G) ((G).firstVertex)

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;

struct vertex {
    char idVertex;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct edge {
    char destVertexID;
    int weight;
    adrEdge nextEdge;
};

struct graph {
    adrVertex firstVertex;
};


void createVertex(char newVertexID, adrVertex &v);
void initGraph(graph &G);
void addVertex(graph &G, char newVertexID);
void buildGraph(graph &G);
adrVertex searchVertex(graph G, char IDsimpul);
void printGraph(graph &G);

void createEdge(char IDsimpulTujuan, int bobot, adrEdge &e);
void addEdge(graph &G, char IDsimpulAsal, char IDsimpulTujuan, int bobot);
int outDegree(graph G, char IDsimpul);


#endif // GRAPH_H_INCLUDED
