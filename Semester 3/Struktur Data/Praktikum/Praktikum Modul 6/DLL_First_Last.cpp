#include "DLL_first_last.h"

void createList(List &L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    first(L) = NULL;
    last(L) = NULL;
}

address createElemen(infotype dataBaru) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address P = new elmList;
    info(P) = dataBaru;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertLast(List &L, address P) {
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

void insertAfter(address Prec, address P) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    next(P) = next(Prec);
    prev(next(Prec)) = P;
    next(Prec) = P;
    prev(P) = Prec;
}

address deleteFirst(List &L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address P = first(L);
    if (next(first(L)) == NULL) {
        first(L) = NULL;
        last(L)= NULL;
    } else {
        first(L) = next(first(L));
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
}

address deleteAfter(address Prec) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    next(P) = NULL;
    prev(P) = NULL;
}

void printList(List L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address P = first(L);
    cout<<"{ ";
    while (P!= NULL) {
        cout<<info(P)<<" ";
        P = next(P);
    }
    cout<<"}";
}

void insertFirst(List &L, address P) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    next(P) = first(L);
    prev(first(L)) = P;
    first(L) = P;
}

void insertAscending(List &L, infotype dataBaru) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address P, Q;
    P = createElemen(dataBaru);
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        if (info(P) <= info(first(L))) {
            insertFirst(L, P);
        } else if (info(P) >= info(last(L))) {
            insertLast(L, P);
        } else {
            Q = next(first(L));
            while (info(P) >= info(Q)) {
                Q = next(Q);
            }
            insertAfter(prev(Q), P);
        }
    }
}

address deleteLast(List &L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address P = last(L);
    next(prev(P)) = NULL;
    last(L) = prev(P);
}

void deleteElm(List &L, infotype dataHapus) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    if (first(L) == NULL) {
        cout << "List Kosong!" << endl;
    } else {
        if (info(first(L)) == dataHapus) {
            deleteFirst(L);
        } else if (info(last(L)) == dataHapus) {
            deleteLast(L);
        } else {
            address P = next(first(L));
            while (P != NULL) {
                if (info(P) == dataHapus) {
                    deleteAfter(prev(P));
                } else {
                    cout << "Data tidak ada" << endl;
                }
                P = next(P);
            }
        }
    }

}

bool findElemen(List L, infotype dataDicari) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    bool res = false;
    address P = first(L);

    while (P != NULL) {
        if (info(P) == dataDicari) {
            res = true;
        }
        P = next(P);
    }

    return res;
}

int frequencyofElm(List L, infotype dataDicari){
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    int freq = 0;
    address P = first(L);

    while(P != NULL){
        if(info(P )== dataDicari) {
            freq++;
        }
        P = next(P);
    }

    return freq;
}
