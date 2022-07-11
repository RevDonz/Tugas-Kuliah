#include "btree.h"
#include <iostream>

int main()
{
    BinTree root;
    adr P;

    root = NULL;
    P = alloc(5);
    insertBST(root, P);

    P = alloc(4);
    insertBST(root, P);

    P = alloc(2);
    insertBST(root, P);

    inOrder(root);

    return 0;
}
