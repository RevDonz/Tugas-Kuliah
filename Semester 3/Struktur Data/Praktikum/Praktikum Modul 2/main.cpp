#include <iostream>

using namespace std;

/*
    Name : Reva Doni Aprilio
    NIM : 1302204051
*/

// deklarasi struct
struct mhs {
    string nama, nim;
    float ipk;
    int semester, kodeUnik;
};

// procedure cetak prodi
// Di cek tiap prodi yang ada, jika ada tambah 1 nilai di prodi tersebut
void printProdi(string nim, int &coffee, int &creative, int &health) {
    if (nim[1] == '1') {
        cout << "Prodi Anda adalah Art of Coffee" << endl;
        coffee++;
    } else if (nim[1] == '2') {
        cout << "Prodi Anda adalah  Creative Content" << endl;
        creative++;
    } else if (nim[1] == '3') {
        cout << "Prodi Anda adalah  Mental Health" << endl;
        health++;
    }
}

// procedure cekIPK
void cekIPK(float ipk, int smt) {
    if (ipk > 3.5 && smt <= 8) {
        cout << "CUMLAUDE" << endl;
    }
}

// function cek kode unik
bool cekKodeUnik(int kode) {
    bool hasil = true;
    if (kode == 1 || kode == 0) {
        hasil = false;
    } else {
        for (int i = 2; i < kode; i++) {
            if (kode % i == 0) {
                hasil = false;
            }
        }
    }

    return hasil;
}

// program utama
int main()
{
    // deklarasi variabel
    int n, maxData, coffee, creative, health;
    float sumIPK, avgIPK, maxIPK = 0;
    cout << "Jumlah data : ";
    cin >> n;
    mhs data[n];
    coffee = 0;
    creative, health = 0;
    maxIPK = 0;
    maxData = 0;

    // loop isi data
    for (int i = 0; i < n; i++) {
        cout << "Data ke " << i+1 << endl ;

        // isi nama
        cout << "Nama : ";
        cin >> data[i].nama;

        // isi nim
        cout << "NIM : ";
        cin >> data[i].nim;
        printProdi(data[i].nim, coffee, creative, health);

        // isi ipk
        cout << "IPK : ";
        cin >> data[i].ipk;
        sumIPK = sumIPK + data[i].ipk;

        // mencari ipk tertinggi
        if (maxIPK < data[i].ipk) {
            maxIPK = data[i].ipk;
            maxData = i;
        }

        // isi smt
        cout << "Semester : ";
        cin >> data[i].semester;
        cekIPK(data[i].ipk, data[i].semester);

        // isi kode unik
        cout << "Kode unik : ";
        cin >> data[i].kodeUnik;
        if (cekKodeUnik(data[i].kodeUnik)) {
            cout << "MAHASISWA BERPRESTASI" << endl;
        }
        cout << endl;
    }

    // hitung rata-rata ipk
    avgIPK = sumIPK/n;

    cout << "......INPUT DATA SELESAI......" << endl;
    cout << endl;
    cout << "IPK terbesar didapatkan oleh "<< data[maxData].nama << endl;
    cout << "IPK rata-rata : " << avgIPK << endl;
    cout << "Program studi Art of Coffee : " << coffee << endl;
    cout << "Program studi Creative Content : " << creative << endl;
    cout << "Program studi mental Health : " << health << endl;


    return 0;
}
