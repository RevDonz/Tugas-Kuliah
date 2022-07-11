#include "btree.h"

adr alloc(infotype x) {
    adr P = new Node;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;
}

void insertBST(adr &root, adr n) {
    if (root == NULL) {
        root = n;
    } else if (info(n) < info(root)) {
        insertBST(left(root), n);
    } else if (info(n) > info(root)){
        insertBST(right(root), n);
    }
}

void inOrder(adr root) {
    if (root != NULL) {
        inOrder(left(root));
        cout << info(root) << " - ";
        inOrder(right(root));
    }
}

