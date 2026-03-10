#include <iostream>
using namespace std;

struct pemesan
{
    string namapemesan;
    string nomoridentitas;
    string kategoritiket;
};

int main()
{
    pemesan orang1;
    int jumlahtiket;

    cout << "Masukan nama pemesan = ";
    cin >> orang1.namapemesan;
    
    cout << "Masukan nomor identitas = ";
    cin >> orang1.nomoridentitas;

    cout << "Masukan kategori tiket = ";
    cin >> orang1.kategoritiket;

    cout << "Masukan jumlah tiket = ";
    cin >> jumlahtiket;
} 