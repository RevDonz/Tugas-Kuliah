#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

/*
Nama : Reva Doni Aprilio
NIM : 1302204051
*/

#define Info(P) (P)->Info
#define next(P) (P)->next
#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)

typedef string infoType;
typedef struct elmQ *address;

struct elmQ {
   infoType Info;
   address next;
};

struct queue {
    address Head;
    address Tail;
};

void createQ(queue &Q);
address createElm(infoType x);
void enqueue(queue &Q, address P);
void dequeue(queue &Q, address &P);
void printQueue(queue Q);
void masukkan_transaksi(queue &Q, address P);
void proses_transaksi(queue &Q, address &P);


#endif // QUEUE_H_INCLUDED
