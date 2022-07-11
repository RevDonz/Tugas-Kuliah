#include "csll.h"

void createList(List &L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    first(L) = NULL;
}

address createElemen(infotype dataBaru) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address P = new elmList;

    info(P) = dataBaru;
    next(P) = NULL;
    return P;
}

void insertFirst(List &L, address P) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address Q;
    Q = first(L);

    if (first(L) == NULL) {
        first(L) = P;
        next(P) = P;
    } else {
        next(P) = first(L);
        while (next(Q) != first(L)) {
            Q = next(Q);
        }
        next(Q) = P;
        first(L) = P;
    }
}

void insertLast(List &L, address P) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address Q;
    Q = first(L);

    if (first(L) == NULL) {
        first(L) = P;
        next(P) = P;
    } else {
        while (next(Q) != first(L)) {
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = first(L);
    }
}

void insertAfter(address &Prec, address &P) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    next(P) = next(Prec);
    next(Prec) = P;
}

void insertDescending(List &L, infotype dataBaru) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */

    address P, Q;
    P = createElemen(dataBaru);
    if (first(L) == NULL) {
        first(L) = P;
        next(P) = first(L);
    } else {
        if (info(P).prioritas >= info(first(L)).prioritas) {
            insertFirst(L, P);
        } else {
            Q = next(first(L));
            while (info(P).prioritas < info(Q).prioritas) {
                if(((info(next(Q)).prioritas) <= (info(P).prioritas)) && next(Q) != first(L)) {
                    insertAfter(Q, P);
                } else if (next(Q) == first(L)) {
                    insertLast(L, P);
                }
                Q = next(Q);
            }
        }
    }
}

void insertAplikasi(List &L, infotype dataBaru) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    int nElm = panjangList(L);
    int max_applicaation = 5;

    if(nElm == max_applicaation) {
        address P;
        deleteLast(L, P);
        printList(L);
        insertDescending(L, dataBaru);
    } else {
        insertDescending(L, dataBaru);
    }
}

void deleteFirst(List &L, address P) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    P = first(L);
    if(next(first(L)) == first(L)) {
        first(L) = NULL;
        next(P) = NULL;
    } else {
        first(L) = next(first(L));
        next(P) = NULL;
        address Q = first(L);
        while(next(Q) != P) {
            Q = next(Q);
        }
        next(Q) = first(L);
    }
}

void deleteLast(List &L, address P) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address Q = first(L);
    while(next(next(Q)) != first(L)) {
        Q = next(Q);
    }
    P = next(Q);
    next(P) = NULL;
    next(Q) = first(L);
}

void deleteAfter(address Prec, address P) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    P = next(Prec);
    next(Prec) = next(P);
}

void deleteElm(List &L, address P){
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    if(P == first(L)) {
        deleteFirst(L, P);
    } else if(next(P) == first(L)) {
        deleteLast(L, P);
    } else {
        address Prec = next(first(L));
        while(next(Prec) != P){
            Prec = next(Prec);
        }
        deleteAfter(Prec, P);
    }
}

void printList(List L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    address P = first(L);
    if(P != NULL) {
        while(next(P) != first(L)) {
            cout<<info(P).nama<<endl;
            cout<<info(P).prioritas<<endl;
            cout<<info(P).sisa_durasi<<endl<<endl;
            P = next(P);
        }
        cout<<info(P).nama<<endl;
        cout<<info(P).prioritas<<endl;
        cout<<info(P).sisa_durasi<<endl<<endl;
    }
}

int panjangList(List L) {
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */
    int n = 0;
    address P = first(L);
    if(P != NULL) {
        while(next(P) != first(L)) {
            n++;
            P = next(P);
        }
        n++;
    }
    return n;
}


