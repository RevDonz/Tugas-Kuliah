#include "multi.h"

int main()
{
    mll List_Sales;
    adr_sales S;
    adr_jual J;
    sales data_Sales;
    int data_Jual;
    string nama_Sales;

    Create_list(List_Sales);

    data_Sales.nama = "Siska";
    data_Sales.gol = "Gol A";
    newElm_Sales(data_Sales, S);
    insertLast_Sales(List_Sales, S);
    newElm_Jual(5, J);
    insertNew_Penjualan(List_Sales, S, J);
    newElm_Jual(3, J);
    insertNew_Penjualan(List_Sales, S, J);
    newElm_Jual(4, J);
    insertNew_Penjualan(List_Sales, S, J);
    newElm_Jual(2, J);
    insertNew_Penjualan(List_Sales, S, J);

    data_Sales.nama = "Affan";
    data_Sales.gol = "Gol C";
    newElm_Sales(data_Sales, S);
    insertLast_Sales(List_Sales, S);
    newElm_Jual(4, J);
    insertNew_Penjualan(List_Sales, S, J);
    newElm_Jual(3, J);
    insertNew_Penjualan(List_Sales, S, J);

    data_Sales.nama = "Cahya";
    data_Sales.gol = "Gol A";
    newElm_Sales(data_Sales, S);
    insertLast_Sales(List_Sales, S);
    newElm_Jual(0, J);
    insertNew_Penjualan(List_Sales, S, J);
    newElm_Jual(2, J);
    insertNew_Penjualan(List_Sales, S, J);
    newElm_Jual(5, J);
    insertNew_Penjualan(List_Sales, S, J);

    data_Sales.nama = "Lia";
    data_Sales.gol = "Gol C";
    newElm_Sales(data_Sales, S);
    insertLast_Sales(List_Sales, S);

    data_Sales.nama = "Hafidz";
    data_Sales.gol = "Gol B";
    newElm_Sales(data_Sales, S);
    insertLast_Sales(List_Sales, S);
    newElm_Jual(1, J);
    insertNew_Penjualan(List_Sales, S, J);
    newElm_Jual(2, J);
    insertNew_Penjualan(List_Sales, S, J);
    showData_Sales(List_Sales);

    cout << "Delete daya yang kurang dari 3" << endl;
    Delete_Penjualan(List_Sales);

    showData_Sales(List_Sales);

    return 0;
}
