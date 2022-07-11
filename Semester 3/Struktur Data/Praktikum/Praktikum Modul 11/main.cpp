#include "queue.h"
#include "stack.h"

int main()
{
    stack S;
    queue Q;
    adr P;

    cout << "===== Stack =====" << endl;
    createStack(S);
    terima_input(S);
    printInfo(S);
    cout << endl << endl;

    cout << "===== Queue =====" << endl;
    createQueue(Q);
    buatDaftarMK(Q);
    showMK(Q);

    return 0;
}
