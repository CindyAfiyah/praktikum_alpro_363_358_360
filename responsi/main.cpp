#include <iostream>
#include <fstream>
#include "header/login.h"
#include "header/input.h"
#include "header/proses.h"
#include "header/output.h"
using namespace std;

int main()
{
    ifstream cekAkses;
    bool akses;

    Login login;
    login.masuk();
    login.simpan();

    cekAkses.open("data/akses.txt", ios::in);
    cekAkses >> akses;
    cekAkses.close();

    if (akses == 1)
    {
        Input input;
        input.salam();
        input.barang();
        input.belanja();
        input.simpan();

        Proses proses;
        proses.barang();
        proses.keranjang();
        proses.hitung();
        proses.simpan();

        Output output;
        output.ambilSaldo();
        output.belanjaan();
        output.kirim();
        output.hitung();
        output.cetak();
        output.simpan();
        output.cetakTxt();
    }
    else
    {
        cout << "pergi" << endl;
    }
}