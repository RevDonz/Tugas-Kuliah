#include "sll.h"

void createList(List &OR) {
    first(OR) = NULL;
}

adr newElement(infotype x) {
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirst(List &OR, adr p) {
    if (first(OR) == NULL) {
        first(OR) = p;
    } else {
        next(p) = first(OR);
        first(OR) = p;
    }
}

void show(List OR) {
    adr P;
    if (first(OR) != NULL) {
        P = first(OR);
        while (P != NULL) {
            cout << info(P) << " ";
            P = next(P);
        }
        cout << endl;
    } else {
        cout << "List Kosong";
    }
}

adr deleteLast(List &OR) {
    adr P, Q;
    if (first(OR) == NULL) {
        P = NULL;
        cout << "List Kosong" << endl;
    } else if (next(first(OR)) == NULL) {
        P = first(OR);
        first(OR) = NULL;
    } else {
        Q = first(OR);
        P = first(OR);
        while (next(P) != NULL) {
            Q = P;
            P = next(P);
        }
        next(Q) = NULL;
    }

    return P;
}

adr deleteAfter(List &OR){
    adr P, R, Q;
    if (first(OR) == NULL){
        P = NULL;
        cout << "List Kosong" << endl;
    } else if (next(next(first(OR))) != NULL) {
        P = first(OR);
        Q = next(P);
        next(P) = (Q)->next;
        (Q)->next = NULL;
    }

    return Q;
}
