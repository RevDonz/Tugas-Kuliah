#include "menu.h"

void createList(List &L) {
    first(L) = NULL;
    last(L) = NULL;
};

mahasiswa newMhs(mahasiswa data) {
    infotype mhs;
    mhs = data;
    return mhs;
};

address newElement(infotype dataBaru) {
    // alokasi P
    address P = new elmList;

    // mengisi element dengan data struct dari parameter, lalu next nya diisi null
    info(P) = dataBaru;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
};

void insertLast(List &L, address P) {

    /* input data di element terakhir, jika kosong langsung inputkan,
    jika ada data di loop sampai menemukan next element yg kosong baru inputkan datanya */
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}

void tambahData(List &L) {
    int jumlah;
    address P;
    string nim, nama;
    int umur;
    mahasiswa mhs, data;

    cout << "Jumlah data yang akan ditambahkan : ";
    cin >> jumlah;

    for (int i = 1; i <= jumlah; i++) {
        cout << "[" << i << "]" << endl;
        cout << "Masukkan nim : ";
        cin >> data.nim;
        cout << "Masukkan nama : ";
        cin >> data.nama;
        cout << "Masukkan umur : ";
        cin >> data.umur;

        //cout << "error" << endl;
        //mhs = newMhs(data);
        P = newElement(data);
        insertLast(L, P);
    }
    cout << endl;
};

void printList(List L) {

    // menampilkan List menggunakan loop, jika list kosong maka akan output "List Kosong" jika tidak akan menampilkan daftar element List
    int i;
    address P;
    if (first(L) == NULL) {
        cout << "List Kosong!" << endl;
        cout << endl;
    } else {
        i = 1;
        P = first(L);
        cout << "Menampilkan semua data : " << endl;
        while (P != NULL) {
            cout << "[" << i << "]" << endl;
            cout << "Nim : " << info(P).nim << endl;
            cout << "Nama : " << info(P).nama << endl;
            cout << "Umur : " << info(P).umur << endl;
            P = next(P);
            i++;
            cout << endl;
        }
    }
}

void reversePrint(List L) {

    int i;
    address P;
    if (first(L) == NULL) {
        cout << "List Kosong!" << endl;
        cout << endl;
    } else {
        i = 1;
        P = last(L);
        cout << "Menampilkan semua data : " << endl;
        while (P != NULL) {
            cout << "[" << i << "]" << endl;
            cout << "Nim : " << info(P).nim << endl;
            cout << "Nama : " << info(P).nama << endl;
            cout << "Umur : " << info(P).umur << endl;
            P = prev(P);
            i++;
            cout << endl;
        }
    }
}

int selectMenu() {
    cout << "====== MENU ======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan semua data dari belakang" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukkan menu : ";

    int input;
    cin >> input;
    cout << endl;

    return input;

};
