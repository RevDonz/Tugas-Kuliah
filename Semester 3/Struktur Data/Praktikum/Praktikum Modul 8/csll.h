#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED
#include <iostream>

using namespace std;

/*
Nama : Reva Doni Aprilio
NIM : 1302204051
*/

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).First)
#define last(L) ((L).Last)

struct data {
    string nama;
    int prioritas;
    int sisa_durasi;
};

typedef data infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address First;
    address Last;
};

void createList(List &L);
address createElemen(infotype dataBaru);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(address &Prec, address &P);
void insertDescending(List &L, infotype dataBaru);
void deleteFirst(List &L, address P);
void deleteLast(List &L, address P);
void deleteAfter(address prec, address P);
void deleteElm(List &L, address P);
void printList(List L);
int panjangList(List L);
void insertAplikasi(List &L, infotype dataBaru);
int eksekusi(address P, int durasi);
void eksekusiMulti(address &current, int N, int durasi);

#endif // CSLL_H_INCLUDED
