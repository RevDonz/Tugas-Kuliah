#include "DLL_First_last.h"

int main()
{
    /*
    Nama : Reva Doni Aprilio
    NIM : 1302204051
    */

    List L;

    createList(L);
    printList(L);
    cout << endl << endl;

    insertAscending(L, 25);
    printList(L);
    cout << endl << endl;

    insertAscending(L, 10);
    printList(L);
    cout << endl << endl;

    insertAscending(L, 32);
    printList(L);
    cout << endl << endl;

    insertAscending (L, 3);
    printList(L);
    cout << endl << endl;

    deleteElm(L, 32);
    printList(L);
    cout << endl << endl;

    deleteElm(L, 3);
    printList(L);
    cout << endl << endl;

    deleteElm(L, 10);
    printList(L);
    cout << endl << endl;

    deleteElm(L, 25);
    printList(L);
    cout << endl << endl;

    insertAscending(L, 25);
    printList(L);
    cout << endl << endl;

    insertAscending(L, 10);
    printList(L);
    cout << endl << endl;

    insertAscending(L, 10);
    printList(L);
    cout << endl << endl;

    insertAscending (L, 25);
    printList(L);
    cout << endl << endl;

    insertAscending (L, 25);
    printList(L);
    cout << endl << endl;

    cout << boolalpha << "{ " << findElemen(L, 10) << " }";
    cout << endl << endl;

    cout << "{ " << frequencyofElm(L, 10) << " }";
    cout << endl << endl;

    cout << "{ " << frequencyofElm(L, 25) << " }";
    cout << endl << endl;

    cout << "{ " << frequencyofElm(L, 2) << " }";
    cout << endl << endl;
}
