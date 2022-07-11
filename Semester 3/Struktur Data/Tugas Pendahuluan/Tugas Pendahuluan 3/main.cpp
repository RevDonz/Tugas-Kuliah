#include "mahasiswa.h"
#include "mahasiswa.cpp"

using namespace std;

int main()
{
    mahasiswa m;
    inputData_1302204051(m);
    showData_1302204051(m);

    cout << "Dengan Rata-Rata Nilai : " << mean_1302204051(m);
    return 0;
}
