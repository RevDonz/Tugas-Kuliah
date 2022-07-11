#include "mylist.h"
int main()
{
    List L;
    address P, temp;
    infotype mhs;

    createList(L);
    printList(L);

    mhs = newMahasiswa("Alice", "1301190202", 3.5);
    P = newElement(mhs);
    insertFirst(L, P);

    mhs = newMahasiswa("Bob", "1301190203", 4);
    P = newElement(mhs);
    insertFirst(L, P);

    printList(L);

    mhs = newMahasiswa("Chihaya", "1301190204", 3.6);
    P = newElement(mhs);
    insertLast(L, P);

    mhs = newMahasiswa("Delta", "1301190205", 2.7);
    P = newElement(mhs);
    insertLast(L, P);

    mhs = newMahasiswa("Euniche", "1301190201",  3.9);
    P = newElement(mhs);
    insertFirst(L, P);

    printList(L);

    deleteFirst(L, temp);
    deleteLast(L, temp);

    printList(L);

    while (mhs.nama != "-") {
        cout << "Nama : ";
        cin >> mhs.nama;
        cout << "NIM : ";
        cin >> mhs.nim;
        cout << "IPK : ";
        cin >> mhs.ipk;

        mhs = newMahasiswa(mhs.nama, mhs.nim, mhs.ipk);
        P = newElement(mhs);
        insertLast(L, P);
        cout << endl;
    }

    printList(L);

    temp = P;
    while (first(L) != NULL) {
        deleteLast(L, temp);
    }

    printList(L);

    return 0;
}
