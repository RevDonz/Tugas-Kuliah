#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

struct pegawai {
    string NIP;
    string nama;
    int gaji;
};

typedef pegawai infotype;
typedef struct elmPeg *address;

struct elmPeg {
    infotype info;
    address next;
};

struct List {
    address first;
};

int selectMenu();
void createList(List &L);
void tambahData(List &L);
void printList(List L);
void deletePeg(List L, string nip);
int jumlahPeg(List L);
int totalGaji(List L);
int avgGaji(List L);
address maxGaji(List L);
address searchData(List L, string nip);

#endif // KANTOR_H_INCLUDED
