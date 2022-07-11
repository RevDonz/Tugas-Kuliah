#include "Queue.h"

// procedure membuat queue
void createQueue(queue &Q) {
    head(Q) = NULL;
    tail(Q) = NULL;
}

// procedure membuat elemen
void createElement(string kodeMK, string namaMK, adr &P) {
    P = new elmQ;
    kodeMK(P) = kodeMK;
    namaMK(P) = namaMK;
    next(P) = NULL;
}

// procedure add queue dengan insert last
void add(queue &Q, adr P) {
    if (head(Q)==NULL && tail(Q)==NULL) {
        head(Q) = P;
    } else {
        next(tail(Q)) = P;
    }
    tail(Q) = P;
}

// procedure membuat daftar MK
void buatDaftarMK(queue &Q) {
    int i = 1;
    string MK, Dosen;
    adr P;

    while (i <= 7) {
        cout << "Masukkan kode MK " << i << " : ";
        cin >> MK;
        cout << "Masukkan nama Dosen  "<< i << " : ";
        cin >> Dosen;
        cout << endl;
        createElement(MK, Dosen, P);
        add(Q, P);
        i++;
    }
}

//procedure menamplkan queue
void showMK(queue Q) {
    adr P = head(Q);
    while(P!=NULL) {
        cout << "Kode MK : " << kodeMK(P) << " | ";
        cout << "Nama MK : " << namaMK(P) << endl;
        P = next(P);
    }
}
