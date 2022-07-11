#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

#define kodeMK(P) (P)->kodeMK
#define namaMK(P) (P)->namaMK
#define next(P) (P)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)

using namespace std;

typedef struct elmQ *adr;

struct elmQ {
   string kodeMK;
   string namaMK;
   adr next;
};

struct queue {
    adr head;
    adr tail;
};

void createQueue(queue &Q);
void add(queue &Q, adr P);
void showMK(queue Q);
void createElement(string kodeMK, string namaMK, adr &P);
void buatDaftarMK(queue &q);

#endif // QUEUE_H_INCLUDED
