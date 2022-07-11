#include "mahasiswa.h"

// Procedure input data
void inputData_1302204051(mahasiswa &m) {
    cout << "Tuliskan NIM: ";
    cin >> m.nim;

    for(int i = 0; i < Max; i++) {
        cout << "Nilai " << i+1 << ": ";
        cin >> m.nilai[i];
    }
    cout << endl;
}

// Fungsi mencari rata-rata nilai dan me return float
float mean_1302204051(mahasiswa m) {
    float mean, total = 0;

    for(int i = 0; i < Max; i++) {
        total = total + m.nilai[i];
    }
    mean = total/Max;

    return mean;
}

// Porcedure menampilkan data nim
void showData_1302204051(mahasiswa m) {
    cout << "Data Mahasiswa:" << endl;
    cout << "Nim: " << m.nim << endl;
    cout << "Nilai: ";
    for(int i = 0; i < Max; i++) {
        cout << m.nilai[i] << " ";
    }
    cout << endl;
}
