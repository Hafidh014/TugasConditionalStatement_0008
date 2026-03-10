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

    cout << "\nTampilkan Pemesanan\n";
    cout << "Nama Pemesan = " << orang1.namapemesan << endl;
    cout << "Nomor Identitas = " << orang1.nomoridentitas << endl;
    cout << "Kategori Tiket = " << orang1.kategoritiket << endl;
    cout << "Jumlah Tiket = " << jumlahtiket << endl;

    return 0;
} 