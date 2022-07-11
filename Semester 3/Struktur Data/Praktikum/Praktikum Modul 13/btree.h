#ifndef BTREE_H_INCLUDED
#define BTREE_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define right(P) (P)->right
#define left(P) (P)->left

typedef int infotype;
typedef struct Node *adr;

struct Node{
    infotype info;
    adr right;
    adr left;
};

typedef adr BinTree;

adr alloc(infotype x);
void insertBST(adr &root, adr n);
adr insertTree(adr &root, adr n);
void inOrder(adr root);
adr findNode(adr root, infotype x);
int countInternalNode(adr root);
void printLeaves(adr root);
int countLeaves(adr root);

#endif // BTREE_H_INCLUDED
