#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

const int Max = 5;

struct mahasiswa {
    string nim;
    float nilai[Max];
};

// Deklarasi Procedure dan Function
void inputData_1302204051(mahasiswa &m);
float mean_1302204051(mahasiswa m);
void showData_1302204051(mahasiswa m);

#endif // MAHASISWA_H_INCLUDED
