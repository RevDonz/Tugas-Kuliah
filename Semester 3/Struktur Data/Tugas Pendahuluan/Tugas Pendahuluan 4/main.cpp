#include "sll.h"

using namespace std;

int main()
{
    List OR;
    cout << "first(OR) sebelum createlist : " << first(OR) << endl;

    createList(OR);
    cout << "first(OR) setelah createlist : " << first(OR) << endl;
    cout << endl;

    // newElement
    adr P;
    P = newElement('A');
    cout << "Info(P): " << info(P) << endl;
    cout << "Next(P): " << next(P) << endl;
    cout << endl;

    // inserFirst
    cout << "first(OR) sebelum inserFirst : " << first(OR) << endl;
    insertFirst(OR, P);
    cout << "first(OR) setelah inserFirst : " << first(OR) << endl;
    cout << "info first(L) :" << info(first(OR)) << endl;

    P = newElement('B');
    insertFirst(OR, P);
    cout << "info first(L) :" << info(first(OR)) << endl;
    cout << endl;

    // show
    show(OR);
    P = newElement('C');
    insertFirst(OR, P);
    show(OR);
    cout << endl;

    show(OR);
    P = newElement('D');
    insertFirst(OR, P);
    show(OR);
    cout << endl;

    // deleteLast
    P = deleteLast(OR);
    show(OR);
    cout << "Yang dihapus di deleteLast : "<< info(P) << endl << endl;

    // deleteAfter
    P = deleteAfter(OR);
    show(OR);
    cout << "Yang dihapus di deleteAfter first(L) : "<< info(P) << endl;

    return 0;
}
