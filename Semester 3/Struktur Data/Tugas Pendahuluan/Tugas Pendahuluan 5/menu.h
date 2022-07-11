#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

typedef string infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
void printList(List L);
void printFiveList(List L);
int selectMenu();
string newPengunjung(string nama);
void tambahData(List &L);
void insertLast(List &L, address P);

#endif // MENU_H_INCLUDED
