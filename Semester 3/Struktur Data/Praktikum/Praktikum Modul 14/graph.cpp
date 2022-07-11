#include "graph.h"

void createGraph(Graph &G) {
    First(G) = NULL;
}

void createNode(char X, adrNode &P) {
    P = new Node;
    idNode(P) = X;
    nextNode(P) = NULL;
    firstEdge(P) = NULL;
}

void insertNewNode(Graph &G, char id_node) {
    adrNode P;

    createNode(id_node, P);

    if(First(G) != NULL){
        adrNode Q = First(G);
        while(nextNode(Q) != NULL){
            Q = nextNode(Q);
        }
        nextNode(Q) = P;
    }else{
        First(G) = P;
    }


}

void showPeta(Graph G) {
    adrNode N;
    adrEdge E;

    N = First(G);
    if (N != NULL) {
        while (N != NULL) {
            E = firstEdge(N);
            while (E != NULL) {
                cout << idNode(N) << " ke " << id(E) << " : " << jarak(E) << endl;
                E = nextEdge(E);
            }
            N = nextNode(N);
        }
    } else {
        cout << "Graph kosong" << endl;
    }
}

adrNode findNode(Graph G, char X) {
    adrNode P = First(G);

    while (P != NULL && idNode(P) != X) {
        P = next(P);
    }
    if (idNode(P) == X) {
        return P;
    } else {
        return NULL;
    }
}

void connecting(Graph &G, char node1, char node2, int jarak) {

    if (First(G) != NULL) {
        adrNode P = findNode(G, node1);
        adrNode Q = findNode(G, node2);

        if (P != NULL && Q != NULL) {
            adrEdge E = new Edge;
            id(E) = node2;
            jarak(E) = jarak;
            nextEdge(E) = NULL;

            if (firstEdge(P) == NULL) {
                firstEdge(P) = E;
            } else {
                adrEdge T = firstEdge(P);
                while(nextEdge(T) != NULL){
                    T = nextEdge(T);
                }
                nextEdge(T) = E;
            }
        }
    }
}

int biayaPerbaikanJalan(Graph G) {
    adrNode N;
    adrEdge E;
    int total = 0;

    N = First(G);
    if (N != NULL) {
        while (N != NULL) {
            E = firstEdge(N);
            while (E != NULL) {
                total = total + jarak(E);
                E = nextEdge(E);
            }
            N = nextNode(N);
        }
    } else {
        cout << "Graph kosong" << endl;
    }

    return total * 1000;
}
