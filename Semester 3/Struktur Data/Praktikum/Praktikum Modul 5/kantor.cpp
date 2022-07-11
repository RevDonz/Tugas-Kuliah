#include "kantor.h"

void createList(List &L) {
    first(L) = NULL;
};

pegawai newPeg(pegawai data) {
    infotype peg;
    peg = data;
    return peg;
};

address newElement(infotype dataBaru) {
    // alokasi P
    address P = new elmPeg;

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
    string nip, nama;
    int gaji;
    pegawai peg, data;

    cout << "Jumlah data yang akan ditambahkan : ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "[" << i+1 << "]" << endl;
        cout << "Masukkan NIP : ";
        cin >> data.NIP;
        cout << "Masukkan nama : ";
        cin >> data.nama;
        cout << "Masukkan gaji : ";
        cin >> data.gaji;

        peg = newPeg(data);
        P = newElement(peg);
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
            cout << "NIP : " << info(P).NIP << endl;
            cout << "Nama : " << info(P).nama << endl;
            cout << "Gaji : " << info(P).gaji << endl;
            P = next(P);
            i++;
            cout << endl;
        }
    }
}

// menghitung jumlah pegawai yang ada, jika tidak ada akan print List kosong
int jumlahPeg(List L) {
    int i;
    address P;
    i = 0;
    if (first(L) == NULL) {
        cout << "List Kosong!" << endl;
        cout << endl;
    } else {
        P = first(L);
        while (P != NULL) {
            P = next(P);
            i++;
        }
    }
    return i;
}

// menghitung total gaji dan return nilai gaji nya
int totalGaji(List L) {
    int i, total;
    address P;
    i, total = 0;
    if (first(L) == NULL) {
        cout << "List Kosong!" << endl;
        cout << endl;
    } else {
        P = first(L);
        while (P != NULL) {
            total = total + info(P).gaji;
            i++;
            P = next(P);
        }
    }
    return total;
}

// menghitung rata-rata gaji
int avgGaji(List L) {
    int gaji, peg, avg;
    gaji = totalGaji(L);
    peg = jumlahPeg(L);
    avg = gaji/peg;
    return avg;
}

// mencari gaji tertinggi dan me return alamat dari gaji tertinggi
address maxGaji(List L) {
    address P, maks;
    if (first(L) == NULL) {
        cout << "List Kosong!" << endl;
        cout << endl;
    } else {
        maks = first(L);
        P = first(L);
        while (P != NULL) {
            if (info(P).gaji > info(maks).gaji) {
                maks = P;
            }
            P = next(P);
        }
    }

    return maks;
}

// mencari data berdasarkan nip dan return alamatnnya
address searchData(List L, string nip) {
    address P;
    P = first(L);
    while (P != NULL) {
        if (info(P).NIP == nip) {
            return P;
        }
        P = next(P);
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
void deleteAfter(List L, address prec, address P) {
    P = next(prec);
    next(prec) = next(P);
    next(P) = NULL;
}

void deletePeg(List L, string nip) {
    address P, Q, del;
    P = searchData(L, nip);
    if (info(P).NIP == info(first(L)).NIP) {
        deleteFirst(L, P);
    } else if (next(P) == NULL) {
        deleteLast(L, P);
    } else {
        Q = first(L);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        deleteAfter(L, Q, del);
    }
}

int selectMenu() {
    cout << "====== MENU ======" << endl;
    cout << "1. Menambah data pegawai" << endl;
    cout << "2. Menampilkan semua data pegawai" << endl;
    cout << "3. Mencari data pegawai berdasarkan NIP" << endl;
    cout << "4. Hapus data pegawai" << endl;
    cout << "5. Jumlah pegawai saat ini" << endl;
    cout << "6. Rata-rata penghasilan pegawai" << endl;
    cout << "7. Nama pegawai dengan penghasilan tertinggi" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukkan menu : ";

    int input;
    cin >> input;
    cout << endl;

    return input;

};
