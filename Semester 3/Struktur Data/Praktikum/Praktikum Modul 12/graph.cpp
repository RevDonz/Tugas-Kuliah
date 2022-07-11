#include "Graph.h"

void createVertex(char newVertexID, adrVertex &v) {
    v = new vertex;
    idVertex(v) = newVertexID;
    nextVertex(v) = NULL;
    firstEdge(v) = NULL;
}

void initGraph(graph &G) {
    firstVertex(G) = NULL;
}

void addVertex(graph &G, char newVertexID) {
    adrVertex pV, lastV;

    createVertex(newVertexID, pV);
    if (firstVertex(G) == NULL) {
        firstVertex(G) = pV;
    } else {
        lastV = firstVertex(G);
        while (nextVertex(lastV) != NULL) {
            lastV = nextVertex(lastV);
        }

        nextVertex(lastV) = pV;
    }
}

void buildGraph(graph &G) {
    char idSimpul;
    adrVertex pV;
    bool sama = false;

    cout << "Masukkan Vertex : ";
    cin >> idSimpul;
    while (idSimpul >= 'A' && idSimpul <= 'Z' && !sama) {
        addVertex(G, idSimpul);
        cout << "Masukkan Vertex : ";
        cin >> idSimpul;
        pV = firstVertex(G);
        while (pV != NULL && !sama) {
            if (idVertex(pV) == idSimpul) {
                sama = true;
            }
            pV = nextVertex(pV);
        }
    }
}

adrVertex searchVertex(graph G, char IDsimpul) {
    adrVertex pV = firstVertex(G);
    adrVertex V = NULL;

    while (pV != NULL && V == NULL) {
        if (idVertex(pV) == IDsimpul) {
                V = pV;
            }
        pV = nextVertex(pV);
    }
    return V;
}

void printGraph(graph &G) {
    adrVertex pV = firstVertex(G);
    adrEdge pE;

    if (pV == NULL) {
        cout << "Graph kosong" << endl;
    } else {
        while (pV != NULL) {
            cout << idVertex(pV);
            pE = firstEdge(pV);
            while(pE != NULL) {
                cout << "->|" << destVertexID(pE) << " " << weight(pE)<<"|";
                pE = nextEdge(pE);
            }
            cout << endl;
            pV = nextVertex(pV);
        }
    }
}

// Tugas Mandiri
void createEdge(char IDsimpulTujuan, int bobot, adrEdge &e){
    e = new edge;
    destVertexID(e) = IDsimpulTujuan;
    weight(e) = bobot;
    nextEdge(e) = NULL;
}

void addEdge(graph &G, char IDsimpulAsal, char IDsimpulTujuan, int bobot){
    adrVertex pV;
    adrEdge pE, lastE;

    pV = searchVertex(G, IDsimpulAsal);
    if (pV != NULL) {
        createEdge(IDsimpulTujuan, bobot, pE);
        if(firstEdge(pV) == NULL) {
            firstEdge(pV) = pE;
        } else {
            lastE = firstEdge(pV);
            while(nextEdge(lastE) != NULL){
                lastE = nextEdge(lastE);
            }
            nextEdge(lastE) = pE;
        }
    }
}

int outDegree(graph G, char IDsimpul){
    adrVertex pV;
    adrEdge pE;
    int outDegree = 0;

    pV = searchVertex(G, IDsimpul);
    if (pV != NULL) {
        pE = firstEdge(pV);
        while(pE != NULL){
            outDegree = outDegree + weight(pE);
            pE = nextEdge(pE);
        }
    }
    return outDegree;
}
