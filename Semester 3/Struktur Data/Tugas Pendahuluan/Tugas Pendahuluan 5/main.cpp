#include <iostream>
#include "menu.h"

using namespace std;

int main()
{   List L;
    address P, temp;
    infotype pengunjung;
    int menu = 0;
    char pilihan;

    createList(L);

    menu = selectMenu();

    while (menu != 0) {
        if (menu == 1) {
                system("CLS");
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
            printFiveList(L);
        } else {
            cout << "Pilih menu yang ada diatas!" << endl << endl;
        }

        menu = selectMenu();
    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;


    return 0;
}
