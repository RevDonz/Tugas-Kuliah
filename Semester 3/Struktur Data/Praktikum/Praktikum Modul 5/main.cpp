#include <iostream>
#include "kantor.h"

using namespace std;

int main()
{
    // Deklarasi variabel
    List L;
    address P, maks;
    infotype pegawai;
    int menu, totalPeg, avg;
    char pilihan;
    string NIP;

    createList(L);

    menu = selectMenu();

    while (menu != 0) {
        if (menu == 1) {
            tambahData(L);
            cout << "Kembali ke menu utama? (Y/N) ";
            cin >> pilihan;
            while (pilihan == 'N') {
                tambahData(L);
                cout << "Kembali ke menu utama? (Y/N) ";
                cin >> pilihan;
            }
            cout << endl;
        } else if (menu == 2) {
            printList(L);
        } else if (menu == 3) {
            cout << "Masukkan NIP yang akan dicari : ";
            cin >> NIP;
            P = searchData(L, NIP);
            cout << "Data ditemukan" << endl;
            cout << "NIP : " << info(P).NIP << endl;
            cout << "Nama : " << info(P).nama << endl;
            cout << "Gaji : " << info(P).gaji << endl;
            cout << endl;
        } else if (menu == 4) {
            cout << "Masukkan NIP yang akan dihapus : ";
            cin >> NIP;
            deletePeg(L, NIP);
        } else if (menu == 5) {
            totalPeg = jumlahPeg(L);
            cout << "Jumlah pegawai : " << totalPeg << endl << endl;
        } else if (menu == 6) {
            avg = avgGaji(L);
            cout << "Rata-rata penghasilan pegawai : " << avg << endl << endl;
        } else if (menu == 7) {
            maks = maxGaji(L);
            cout << "Nama pegawai dengan penghasilan tertinggi : " << info(maks).nama << endl << endl;
        } else {
            cout << "Pilih menu yang ada diatas!" << endl << endl;
        }

        menu = selectMenu();
    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;


    return 0;
}
