#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

struct mahasiswa {
    string nim;
    string nama;
    int umur;
};

typedef mahasiswa infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

void createList(List &L);
void printList(List L);
void reversePrint(List L);
int selectMenu();
mahasiswa newPengunjung(mahasiswa nama);
void tambahData(List &L);
void insertLast(List &L, address P);

#endif // MENU_H_INCLUDED
