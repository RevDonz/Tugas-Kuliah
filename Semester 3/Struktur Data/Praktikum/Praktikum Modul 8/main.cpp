#include <iostream>
#include "csll.h"

int main()
{
    const int max_application = 5;
    List L;
    address P;
    infotype apk;

    createList(L);

    apk.nama = "word";
    apk.prioritas = 5;
    apk.sisa_durasi = 10;
    insertAplikasi(L, apk);

    apk.nama = "excel";
    apk.prioritas = 4;
    apk.sisa_durasi = 20;
    insertAplikasi(L, apk);

    apk.nama = "chrome";
    apk.prioritas = 8;
    apk.sisa_durasi = 5;
    insertAplikasi(L, apk);

    apk.nama = "wa";
    apk.prioritas = 7;
    apk.sisa_durasi = 10;
    insertAplikasi(L, apk);

    apk.nama = "dota";
    apk.prioritas = 10;
    apk.sisa_durasi = 30;
    insertAplikasi(L, apk);

    apk.nama = "power point";
    apk.prioritas = 6;
    apk.sisa_durasi = 15;
    insertAplikasi(L, apk);

    printList(L);

}
