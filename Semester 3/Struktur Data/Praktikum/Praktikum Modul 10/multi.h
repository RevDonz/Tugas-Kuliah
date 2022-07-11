#ifndef MULTI_H_INCLUDED
#define MULTI_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define nextJual(P) (P)->nextJual
#define first(MLL) ((MLL).first)

typedef struct elm_sales *adr_sales ;
typedef struct elm_jual *adr_jual;

struct sales {
    string nama;
    string gol;
};

struct elm_sales {
    sales info;
    adr_sales next;
    adr_jual nextJual;
};

struct elm_jual {
    int info;
    adr_jual next;
};

struct mll {
    adr_sales first;
};

void Create_list(mll &List_Sales);
void newElm_Sales(sales info, adr_sales &S);
void newElm_Jual(int info, adr_jual &J);
void insertNew_Penjualan(mll &List_Sales, adr_sales S, adr_jual J);
void insertLast_Sales(mll &List_Sales, adr_sales S);
void deleteFirst_Penjualan(mll &List_Sales, adr_sales S, adr_jual J);
void deleteLast_Penjualan(mll &List_Sales, adr_sales &S, adr_jual &J);
void deleteAfter_Penjualan(mll &List_Sales, adr_sales &S, adr_jual prec ,adr_jual &J);
void Delete_Penjualan(mll &List_Sales);
void showData_Sales(mll List_Sales);
adr_sales Search_Sales(mll List_Sales, string nama_Sales);

#endif // MULTI_H_INCLUDED
