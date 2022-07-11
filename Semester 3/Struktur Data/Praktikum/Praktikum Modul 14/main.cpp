#include "binarySearchTree.h"
#include "graph.h"
int main()
{
    Graph G;
    createGraph(G);

    cout << "MEMBUAT NODE PADA GRAPH" << endl;
    insertNewNode(G, 'A');
    insertNewNode(G, 'B');
    insertNewNode(G, 'C');
    insertNewNode(G, 'D');
    insertNewNode(G, 'E');
    showPeta(G);

    cout << "\nMEMBUAT EDGE PADA GRAPH" << endl;
    connecting(G, 'A', 'C', 5);
    connecting(G, 'A', 'D', 10);

    showPeta(G);
    int total = biayaPerbaikanJalan(G);
    cout << "Total biaya perbaikan adalah Rp. " << total << endl;

    cout << "\n===== Binary Search Tree =====" << endl << endl;
    address root;
    root = NULL;

    cout << "Insert Node: " << endl;
    insertNode(root, 9);
    insertNode(root, 4);
    insertNode(root, 8);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 3);
    insertNode(root, 10);
    insertNode(root, 25);

    cout << "Print In Order: ";
    printInorder(root);
    cout << endl;

    return 0;
}
