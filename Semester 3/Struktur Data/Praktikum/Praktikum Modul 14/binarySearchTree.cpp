#include "binarySearchTree.h"

address alokasi(infotype x) {
    address P  = new node;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;
    return P;
}

void insertNode(address &root, infotype x) {
    if (root == NULL) {
        cout<<"Berhasil insert node "<< x <<endl;
        root = alokasi(x);
    } else {
        if (info(root) > x) {
            insertNode(left(root), x);
        } else if (info(root) < x) {
            insertNode(right(root), x);
        } else {
            cout<<"Duplikat node "<< x <<endl;
        }
    }
}

void printInorder(address root) {
    if(root != NULL) {
        printInorder(left(root));
        cout<<(info(root))<<" ";
        printInorder(right(root));
    }
}
