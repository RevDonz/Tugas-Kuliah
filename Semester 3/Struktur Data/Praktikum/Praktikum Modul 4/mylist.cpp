#include "mylist.h"

void createList(List &L) {
    /*
        Reva Doni Aprilio
        1302204051
    */

    // membuat list dengan elemet pertama kosong
    first(L) = NULL;
};

infotype newMahasiswa(string nama, string nim, float ipk) {
    /*
        Reva Doni Aprilio
        1302204051
    */

    // deklarasi struct mahasiswa
    infotype mhs;

    // input data dari parameter
    mhs.nama = nama;
    mhs.nim= nim;
    mhs.ipk = ipk;

    return mhs;
};

address newElement(infotype dataBaru) {
    /*
        Reva Doni Aprilio
        1302204051
    */

    // alokasi P
    address P = new elmList;

    // mengisi element dengan data struct dari parameter, lalu next nya diisi null
    info(P) = dataBaru;
    next(P) = NULL;
    return P;
};

void insertFirst(List &L, address P) {
    /*
        Reva Doni Aprilio
        1302204051
    */

    // input data di element pertama, jika list kosong langsung diisi, jika sudah ada geser element pertama ke next dulu
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertLast(List &L, address P) {
    /*
        Reva Doni Aprilio
        1302204051
    */

    // deklarasi address bantuan
    address Q;
    Q = first(L);

    /* input data di element terakhir, jika kosong langsung inputkan,
    jika ada data di loop sampai menemukan next element yg kosong baru inputkan datanya */
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void deleteFirst(List &L, address P) {
    /*
        Reva Doni Aprilio
        1302204051
    */

    // menghapus data element pertama
    P = first(L);
    if (next(first(L)) == NULL) {
        first(L) = NULL;
    } else {
        first(L) = next(first(L));
    }
    next(P) = NULL;
};

void deleteLast(List &L, address P) {
    /*
        Reva Doni Aprilio
    */

    // menghapus data element terakhir
    address Q;
    if (first(L) == NULL){
        P = NULL;
    } else if (next(first(L)) == NULL){
        P = first(L);
        first(L) = NULL;
    } else {
        Q = first(L);
        P = first(L);
        while (next(P) != NULL){
            Q = P;
            P = next(P);
        }
        next(Q) = NULL;
    }
}

void printList(List L) {
    /*
        Reva Doni Aprilio
        1302204051
    */

    // menampilkan List menggunakan loop, jika list kosong maka akan output "List Kosong" jika tidak akan menampilkan daftar element List
    int i;
    address P;
    if (first(L) == NULL) {
        cout << "List Kosong!" << endl;
    } else {
        i = 1;
        P = first(L);
        while (P != NULL) {
            cout << "[" << i << "]" << endl;
            cout << "Nama : " << info(P).nama << endl;
            cout << "NIM : " << info(P).nim << endl;
            cout << "IPK : " << info(P).ipk << endl;
            P = next(P);
            i++;
        }
        cout << "List selesai ditampilkan" << endl;
    }
    cout << endl;
}


