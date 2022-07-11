#include "stack.h"
#include "queue.h"
using namespace std;

int main()
{
    cout << "===== Stack =====" << endl;
    stack S;
    createStack(S);
    push(S, 12);
    push(S, 17);
    push(S, 5);
    push(S, 10);
    push(S, 15);
    push(S, 25);
    push(S, 11);
    push(S, 22);
    push(S, 19);
    printInfo(S);
    ascending(S);
    printInfo(S);
    descending(S);
    printInfo(S);
    cout << endl;

    cout << "===== Queue =====" << endl;
    queue Q;
    address P;

    createQ(Q);
    P = createElm("Andi transfer Doni 50.000");
    masukkan_transaksi(Q, P);

    P = createElm("Doni transfer Saras 20.000");
    masukkan_transaksi(Q, P);

    printQueue(Q);
    cout<<endl;

    P = createElm("Tono transfer Bili 20.000");
    masukkan_transaksi(Q, P);

    printQueue(Q);
    cout<<endl;

    proses_transaksi(Q,P);
    printQueue(Q);
    cout<<endl;

    cout<<"Isi data_transaksi adalah : "<<Info(P)<<endl;

    return 0;
}
