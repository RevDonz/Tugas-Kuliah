#include "catalog.h"
#include "catalog.cpp"

int main()
{
    cout << "Terbimbing" << endl;

    // inisialisasi variabel
    catalog storage;
    storage.max = 8;
    storage.num = -1;

    // menambahkan data & output
    add_data(storage, 6);
    view_data(storage);
    add_data(storage, 4);
    view_data(storage);
    add_data(storage, 8);
    view_data(storage);
    add_data(storage, 2);
    view_data(storage);

    cout<<endl;

    // mencari index
    int i;
    i = search_data(storage, 8);
    cout << i << endl;
    i = search_data(storage, 5);
    cout << i << endl;
    cout<<endl;

    cout << "Test Akhir" << endl;

    reversed_view(storage);
    add_data(storage, 5);
    reversed_view(storage);

    cout<<endl;

    view_data(storage);
    delete_data(storage);
    view_data(storage);

    return 0;
}
