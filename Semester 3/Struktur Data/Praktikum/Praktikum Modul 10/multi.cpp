#include "multi.h"

void Create_list(mll &List_Sales) {
    first(List_Sales) = NULL;
}

void newElm_Sales(sales info, adr_sales &S) {
    S = new elm_sales;
    next(S) = NULL;
    nextJual(S) = NULL;
    info(S).nama = info.nama;
    info(S).gol = info.gol;
}

void newElm_Jual(int info, adr_jual &J) {
    J = new elm_jual;
    info(J) = info;
    next(J) = NULL;
}

void insertNew_Penjualan(mll &List_Sales, adr_sales S, adr_jual J) {
    adr_jual P = nextJual(S);
    if (P  ==  NULL) {
        nextJual(S) = J;
    } else {
        while (next(P)!= NULL) {
            P = next(P);
        }
        next(P) = J;
    }
}

void insertLast_Sales(mll &List_Sales, adr_sales S) {
    if (first(List_Sales)  ==  NULL) {
        first(List_Sales) = S;
    } else {
        adr_sales P = first(List_Sales);
        while (next(P) != NULL) {
            P = next(P);
        }
        next(P) = S;
    }
}

void deleteFirst_Penjualan(mll &List_Sales, adr_sales S, adr_jual J) {
    adr_jual P = nextJual(S);
    J = next(P);
    if (next(nextJual(S)) == NULL) {
        nextJual(S) == NULL;
    } else {
        nextJual(S) = next(J);
    }
    next(P) = NULL;
}

void deleteLast_Penjualan(mll &List_Sales, adr_sales &S, adr_jual &J) {
    adr_jual P = nextJual(S);
    while (next(P) != J) {
        P = next(P);
    }
    J = next(P);
    next(P) = next(J);
    next(J) = NULL;
}

void deleteAfter_Penjualan(mll &List_Sales, adr_sales &S, adr_jual prec ,adr_jual &J) {
    next(prec) = next(J);
    next(J) =  NULL;
}

void Delete_Penjualan(mll &List_Sales) {
    adr_sales S = first(List_Sales);
    while (S != NULL) {
        adr_jual J = nextJual(S);
        while (J != NULL) {
            if (info(J) < 3) {
                adr_jual last = nextJual(S);
                while (next(last) != NULL) {
                    last = next(last);
                }
                if (J  ==  nextJual(S)) {
                    deleteFirst_Penjualan(List_Sales, S, J);
                } else if (J == last) {
                    deleteLast_Penjualan(List_Sales, S, J);
                } else {
                    adr_jual prec = nextJual(S);
                    while (next(prec) != J) {
                        prec = next(prec);
                    }
                    deleteAfter_Penjualan(List_Sales, S, prec, J);
                }
            }
            J = next(J);
        }
        S = next(S);
    }
}

void showData_Sales(mll List_Sales) {
    adr_sales S = first(List_Sales);
    while (S != NULL) {
        cout<<info(S).nama<<endl;
        //cout<<info(pS).gol
        adr_jual J = nextJual(S);
        while (J != NULL) {
            cout<<info(J)<<" ";
            J = next(J);
        }
        cout<<endl<<endl;
        S = next(S);
    }
}

adr_sales Search_Sales(mll List_Sales, string nama_Sales) {
    adr_sales P = first(List_Sales);
    while (P != NULL) {
        if (info(P).nama  ==  nama_Sales) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}
