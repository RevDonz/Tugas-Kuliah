#include "queue.h"

void createQ(queue &Q) {
    Head(Q) = NULL;
    Tail(Q) = NULL;
}

address createElm(infoType x) {
    address P = new elmQ;
    Info(P) = x;
    next(P) = NULL;
    return P;
}

void enqueue(queue &Q, address P) {
    if (Head(Q)==NULL && Tail(Q)==NULL) {
        Head(Q) = P;
    } else {
        next(Tail(Q)) = P;
    }
    Tail(Q) = P;
}

void dequeue(queue &Q, address &P) {
    P = Head(Q);
    Head(Q) = next(Head(Q));
    if (Head(Q)==NULL) {
        Tail(Q)= NULL;
    }
}

void printQueue(queue Q) {
    address P = Head(Q);
    while(P!=NULL) {
        cout<<Info(P)<<endl;
        P = next(P);
    }
}

void masukkan_transaksi(queue &Q, address P) {
    enqueue(Q, P);
}

void proses_transaksi(queue &Q, address &P) {
    dequeue(Q, P);
}
