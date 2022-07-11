#ifndef DLL_FIRST_LAST_H_INCLUDED
#define DLL_FIRST_LAST_H_INCLUDED
#include <iostream>

using namespace std;

/*
Nama : Reva Doni Aprilio
NIM : 1302204051
*/

#define info(P) (P)->info
#define prev(P) (P)->prev
#define next(P) (P)->next
#define first(L) ((L).First)
#define last(L) ((L).Last)

typedef int infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address First;
    address Last;
};

void createList(List &L);
address createElemen(infotype dataBaru);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(address Prec, address P);
void insertAscending(List &L, infotype dataBaru);
address deleteFirst(List &L);
address deleteLast(List &L);
address deleteAfter(address Prec);
void deleteElm(List &L, infotype dataHapus);
void printList(List L);
bool findElemen(List L, infotype dataDicari);
int frequencyofElm(List L, infotype dataDicari);
#endif // DLL_FIRST_LAST_H_INCLUDED
