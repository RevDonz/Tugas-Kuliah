#include "menu.h"

void createList(List &L) {
    first(L) = NULL;
};

string newPengunjung(string nama) {
    infotype pengunjung;
    pengunjung = nama;
    return pengunjung;
};

address newElement(infotype dataBaru) {
    // alokasi P
    address P = new elmList;

    // mengisi element dengan data struct dari parameter, lalu next nya diisi null
    info(P) = dataBaru;
    next(P) = NULL;
    return P;
};

void insertLast(List &L, address P) {
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

void tambahData(List &L) {
    int jumlah;
    address P;
    string pengunjung, data;

    cout << "Jumlah data yang akan ditambahkan : ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan data baru : ";
        cin >> data;

        pengunjung = newPengunjung(data);
        P = newElement(pengunjung);
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
    } else {
        i = 1;
        P = first(L);
        cout << "Menampilkan semua data : " << endl;
        while (P != NULL) {
            cout << i << ". ";
            cout << info(P) << endl;
            P = next(P);
            i++;
        }
    }
    cout << endl;
}

void printFiveList(List L) {

    // menampilkan List menggunakan loop, jika list kosong maka akan output "List Kosong" jika tidak akan menampilkan daftar element List
    int i;
    address P;
    if (first(L) == NULL) {
        cout << "List Kosong!" << endl;
    } else {
        i = 1;
        P = first(L);
        cout << "Menampilkan 5 data : " << endl;
        for (int i = 1; i <= 5; i++) {
            if (P != NULL) {
                cout << i << ". ";
                cout << info(P) << endl;
                P = next(P);
            }
        }
    }
    cout << endl;
}

int selectMenu() {
    cout << "====== MENU ======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan 5 data pengunjung" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukkan menu : ";

    int input;
    cin >> input;
    cout << endl;

    return input;

};
