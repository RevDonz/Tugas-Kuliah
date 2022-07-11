#ifndef ASSIGNMENT_H_INCLUDED
#define ASSIGNMENT_H_INCLUDED
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

typedef string infotype;
typedef struct elmDLL *adrDLL;

struct elmDLL {
    infotype info;
    adrDLL next;
    adrDLL prev;
};

struct listDouble {
    adrDLL First;
    adrDLL Last;
};

void createList(listDouble &L);
adrDLL createElemen(infotype dataBaru);
void insertLast(listDouble &L, adrDLL P);
adrDLL deleteFirst(listDouble &L);
void showList(listDouble L);
bool findString(listDouble L, infotype cari);
#endif // ASSIGNMENT_H_INCLUDED
