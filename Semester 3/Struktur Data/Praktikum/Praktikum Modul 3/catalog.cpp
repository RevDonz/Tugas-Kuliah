#include "catalog.h"
using namespace std;

// procedure tambah data
void add_data(catalog &C, int x) {
    C.num++;
    C.data[C.num] = x;
};

// procedure untuk menampilkan data
void view_data(catalog C) {
    for (int i = 0; i < C.num+1; i++) {
        cout<<C.data[i]<<" ";
    }
    cout<<endl;
}

// function cari data
int search_data(catalog C, int x) {
    int result;
    result = -1;

    for (int i = 0; i < C.num+1; i++) {
        if (C.data[i] == x) {
            result = i;
            break;
        }
    }

    return result;
};

// procedure menampilkan semua data dari belakang
void reversed_view(catalog C) {
    for (int i = C.num; i >= 0; i--) {
        cout<<C.data[i]<<" ";
    }
    cout<<endl;
};

// procedure menghapus data, geser ke 1 index sebelumnya
void delete_data(catalog &C) {
    C.num--;
};
