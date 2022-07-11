#include "assignment.h"

void createList(listDouble &L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    first(L) = NULL;
    last(L) = NULL;
}

adrDLL createElemen(infotype dataBaru) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    adrDLL P = new elmDLL;
    info(P) = dataBaru;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertLast(listDouble &L, adrDLL P) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    if (first(L) == NULL){
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

adrDLL deleteFirst(listDouble &L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    adrDLL P = first(L);
    if (next(first(L)) == NULL) {
        first(L) = NULL;
        last(L)= NULL;
    } else {
        first(L) = next(first(L));
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
}

void showList(listDouble L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    int i = 1;
    adrDLL P = first(L);
    if (P != NULL) {
        while (P != NULL) {
            cout << i << ". " << info(P) << endl;
            i++;
            P = next(P);
        }
    } else {
        cout << "List Kosong!";
    }

}

bool findString(listDouble L, infotype cari) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    bool res = false;
    adrDLL P = first(L);

    while (P != NULL) {
        if (info(P) == cari) {
            res = true;
        }
        P = next(P);
    }

    return res;
}
