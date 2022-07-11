#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

typedef char infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void createList(List &OR);
adr newElement(infotype x);
void insertFirst(List &OR, adr p);
void show(List OR);
adr deleteLast(List &OR);
adr deleteAfter(List &OR);

#endif // SLL_H_INCLUDED
