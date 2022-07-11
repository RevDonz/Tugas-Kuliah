#include "assignment.h"

int main()
{
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */

    listDouble L;
    int N;
    string input, cari;
    adrDLL P;
    bool isThere;

    createList(L);
    cout << "Masukkan jumlah data: ";
    cin >> N;
    cout << endl;

    for (int i = 1; i <= N; i++) {
        cout << "Masukkan data string " << i << ": ";
        cin >> input;
        P = createElemen(input);
        insertLast(L, P);
    }
    cout << endl;

    showList(L);
    cout << endl;

    cout << "Masukkan string yang ingin dicari : ";
    cin >> cari;
    isThere = findString(L, cari);
    cout << boolalpha << "Hasilnya : " << isThere << endl << endl;

    cout << "Prose penghapusan data list.." << endl;
    while (first(L) != NULL) {
        deleteFirst(L);
    }
    showList(L);
    cout << endl;
}
