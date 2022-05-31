using namespace std;

class Output
{
public:
    void ambilSaldo();
    void belanjaan();
    void kirim();
    void hitung();
    void cetak();
    void simpan();
    void cetakTxt();

private:
    ifstream ambilDataBelanjaan;
    ofstream simpanSemua;
    string alamat, namaBarang[8], kode, kurir, metodeBayar, diskon, proteksi;
    float total, hargaBarang[8], saldo, lindung;
    int jumlahBeli[8], jumlahBarang[8];
};
void Output::ambilSaldo()
{
    ambilDataBelanjaan.open("data/saldo.txt", ios::in);
    ambilDataBelanjaan >> saldo;
    ambilDataBelanjaan.close();
}
void Output::belanjaan()
{
    bool nama0 = true, nama1 = true, nama2 = true, nama3 = true, nama4 = true,
         nama5 = true, nama6 = true, nama7 = true, jumlah0 = true, jumlah1 = true,
         jumlah2 = true, jumlah3 = true, jumlah4 = true, jumlah5 = true,
         jumlah6 = true, jumlah7 = true, harga0 = true, harga1 = true,
         harga2 = true, harga3 = true, harga4 = true, harga5 = true,
         harga6 = true, harga7 = true, beli0 = true, beli1 = true, beli2 = true,
         beli3 = true, beli4 = true, beli5 = true, beli6 = true, beli7 = true,
         harga = true;
    ambilDataBelanjaan.open("data/totalbelanja.txt");
    while (!ambilDataBelanjaan.eof())
    {
        if (nama0 == true)
        {
            ambilDataBelanjaan >> namaBarang[0];
            nama0 = false;
        }
        else if (jumlah0 == true)
        {
            ambilDataBelanjaan >> jumlahBarang[0];
            jumlah0 = false;
        }
        else if (harga0 == true)
        {
            ambilDataBelanjaan >> hargaBarang[0];
            harga0 = false;
        }
        else if (beli0 == true)
        {
            ambilDataBelanjaan >> jumlahBeli[0];
            beli0 = false;
        }
        else if (nama1 == true)
        {
            ambilDataBelanjaan >> namaBarang[1];
            nama1 = false;
        }
        else if (jumlah1 == true)
        {
            ambilDataBelanjaan >> jumlahBarang[1];
            jumlah1 = false;
        }
        else if (harga1 == true)
        {
            ambilDataBelanjaan >> hargaBarang[1];
            harga1 = false;
        }
        else if (beli1 == true)
        {
            ambilDataBelanjaan >> jumlahBeli[1];
            beli1 = false;
        }
        else if (nama2 == true)
        {
            ambilDataBelanjaan >> namaBarang[2];
            nama2 = false;
        }
        else if (jumlah2 == true)
        {
            ambilDataBelanjaan >> jumlahBarang[2];
            jumlah2 = false;
        }
        else if (harga2 == true)
        {
            ambilDataBelanjaan >> hargaBarang[2];
            harga2 = false;
        }
        else if (beli2 == true)
        {
            ambilDataBelanjaan >> jumlahBeli[2];
            beli2 = false;
        }
        else if (nama3 == true)
        {
            ambilDataBelanjaan >> namaBarang[3];
            nama3 = false;
        }
        else if (jumlah3 == true)
        {
            ambilDataBelanjaan >> jumlahBarang[3];
            jumlah3 = false;
        }
        else if (harga3 == true)
        {
            ambilDataBelanjaan >> hargaBarang[3];
            harga3 = false;
        }
        else if (beli3 == true)
        {
            ambilDataBelanjaan >> jumlahBeli[3];
            beli3 = false;
        }
        else if (nama4 == true)
        {
            ambilDataBelanjaan >> namaBarang[4];
            nama4 = false;
        }
        else if (jumlah4 == true)
        {
            ambilDataBelanjaan >> jumlahBarang[4];
            jumlah4 = false;
        }
        else if (harga4 == true)
        {
            ambilDataBelanjaan >> hargaBarang[4];
            harga4 = false;
        }
        else if (beli4 == true)
        {
            ambilDataBelanjaan >> jumlahBeli[4];
            beli4 = false;
        }
        else if (nama5 == true)
        {
            ambilDataBelanjaan >> namaBarang[5];
            nama5 = false;
        }
        else if (jumlah5 == true)
        {
            ambilDataBelanjaan >> jumlahBarang[5];
            jumlah5 = false;
        }
        else if (harga5 == true)
        {
            ambilDataBelanjaan >> hargaBarang[5];
            harga5 = false;
        }
        else if (beli5 == true)
        {
            ambilDataBelanjaan >> jumlahBeli[5];
            beli5 = false;
        }
        else if (nama6 == true)
        {
            ambilDataBelanjaan >> namaBarang[6];
            nama6 = false;
        }
        else if (jumlah6 == true)
        {
            ambilDataBelanjaan >> jumlahBarang[6];
            jumlah6 = false;
        }
        else if (harga6 == true)
        {
            ambilDataBelanjaan >> hargaBarang[6];
            harga6 = false;
        }
        else if (beli6 == true)
        {
            ambilDataBelanjaan >> jumlahBeli[6];
            beli6 = false;
        }
        else if (nama7 == true)
        {
            ambilDataBelanjaan >> namaBarang[7];
            nama7 = false;
        }
        else if (jumlah7 == true)
        {
            ambilDataBelanjaan >> jumlahBarang[7];
            jumlah7 = false;
        }
        else if (harga7 == true)
        {
            ambilDataBelanjaan >> hargaBarang[7];
            harga7 = false;
        }
        else if (beli7 == true)
        {
            ambilDataBelanjaan >> jumlahBeli[7];
            beli7 = false;
        }
        else if (harga == true)
        {
            ambilDataBelanjaan >> total;
            harga = false;
        }
    }
    ambilDataBelanjaan.close();
}
void Output::kirim()
{
    cout << "\nMasukkan alamat anda : ";
    getline(cin, alamat);
    cout << "Masukkan kode voucher : ";
    getline(cin, kode);
    cout << "perlindungan barang(y/n) : ";
    getline(cin, proteksi);
    cout << "Opsi pengiriman : ";
    getline(cin, kurir);
    cout << "Pilih metode pembayaran : ";
    getline(cin, metodeBayar);
}
void Output::hitung()
{
    // diskon
    if (kode == "mantap")
    {
        total *= 0.5;
        diskon = "50%";
    }
    else if (kode == "satset")
    {
        total *= 0.3;
        diskon = "30%";
    }
    else if (kode == "terserah")
    {
        total *= 0.1;
        diskon = "10%";
    }
    else if (kode.empty())
    {
        total *= 1;
        diskon = "0%";
    }
    else
    {
        cout << "Kode yang anda masukkan salah" << endl;
    }
    // proteksi
    if (proteksi == "y" || proteksi == "Y")
    {
        total += 0.7;
        lindung = 0.7;
    }
    else if (proteksi == "n" || proteksi == "N" || proteksi.empty())
    {
        total *= 1;
        lindung = 0;
    }
    // ongkir 1 dolar
    total += 1;
}
void Output::cetak()
{
    system("clear");
    cout << "-----------------------------------------------" << endl;
    cout << "|               Rincian Pesanan               |\n";
    cout << "-----------------------------------------------" << endl;
    cout << " Informasi Pengiriman" << endl;
    cout << "\tKurir \t\t : " << kurir << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Alamat Pengiriman \n\t" << alamat << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Nama Produk \n";
    for (int i = 0; i < 8; i++)
    {
        if (jumlahBeli[i] > 0)
        {
            cout << "\t" << namaBarang[i] << " x " << jumlahBeli[i] << " = "
                 << jumlahBeli[i] * hargaBarang[i] << endl;
        }
    }
    cout << "-----------------------------------------------" << endl;
    cout << " Diskon \t\t : \t" << diskon << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Ongkos Kirim \t : \t"
         << "$" << float(1) << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Proteksi \t\t : \t"
         << "$" << float(lindung) << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Total Pesanan \t : \t"
         << "$" << float(total) << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Sisa Saldo Anda : \t"
         << "$" << float(saldo - total) << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Metode Pembayaran  \n\t" << metodeBayar << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Voucher Toko Digunakan  \n\t" << kode << endl;
    cout << "-----------------------------------------------" << endl;
}
void Output::simpan()
{
    simpanSemua.open("data/saldo.txt", ios::trunc);
    simpanSemua << saldo - total;
    simpanSemua.close();
    simpanSemua.open("data/databarang.txt", ios::trunc);
    for (int i = 0; i < 8; i++)
    {
        if (i < 7)
        {
            simpanSemua << namaBarang[i] << endl;
            simpanSemua << jumlahBarang[i] - jumlahBeli[i] << endl;
            simpanSemua << hargaBarang[i] << endl;
        }
        else
        {
            simpanSemua << namaBarang[i] << endl;
            simpanSemua << jumlahBarang[i] - jumlahBeli[i] << endl;
            simpanSemua << hargaBarang[i];
        }
    }
    simpanSemua.close();
}
void Output::cetakTxt()
{
    simpanSemua.open("data/struk.txt", ios::app);
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Rincian Pesanan                             |\n";
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Informasi Pengiriman                        |" << endl;
    simpanSemua << "\tKurir : " << kurir << endl;
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Alamat Pengiriman                           |\n\t" << alamat
                << endl;
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Nama Produk :                               |\n";
    for (int i = 0; i < 8; i++)
    {
        if (jumlahBeli[i] > 0)
        {
            simpanSemua << namaBarang[i] << " x " << jumlahBeli[i] << " = "
                        << jumlahBeli[i] * hargaBarang[i] << endl;
        }
    }
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Ongkos Kirim :                              |\n\t"
                << "$" << float(1) << endl;
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Proteksi :                              |\n\t"
                << "$" << float(lindung) << endl;
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Total Pesanan :                             |\n\t"
                << "$" << float(total) << endl;
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Sisa Saldo Anda :                           |\n\t"
                << "$" << float(saldo - total) << endl;
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Metode Pembayaran :                         |\n\t"
                << metodeBayar << endl;
    simpanSemua << "-----------------------------------------------" << endl;
    simpanSemua << "| Voucher Toko Digunakan :                    |\n\t" << kode
                << endl;
    simpanSemua << "-----------------------------------------------";
    simpanSemua.close();
}