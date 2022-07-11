#ifndef CATALOG_H_INCLUDED
#define CATALOG_H_INCLUDED
#include <iostream>

using namespace std;

const int nMax = 50;

// tipe bentukan
struct catalog {
    int data[nMax];
    int max;
    int num;
};

// Deklarasi function dan procedure
void add_data(catalog &C, int x);
void view_data(catalog C);
int search_data(catalog C, int x);

// Procedure test akhir
void reversed_view(catalog C);
void delete_data(catalog &C);

#endif // CATALOG_H_INCLUDED
