using namespace std;
class Proses
{
public:
    void barang();
    void keranjang();
    void hitung();
    void simpan();

private:
    ifstream ambilDataBarang;
    ofstream tulisDataBeli;
    string namaBarang[8];
    int jumlahBarang[8], jumlahBeli[8];
    float hargaBarang[8], total = 0;
};
void Proses::barang()
{
    bool nama0 = true, nama1 = true, nama2 = true, nama3 = true, nama4 = true,
         nama5 = true, nama6 = true, nama7 = true, jumlah0 = true, jumlah1 = true,
         jumlah2 = true, jumlah3 = true, jumlah4 = true, jumlah5 = true,
         jumlah6 = true, jumlah7 = true, harga0 = true, harga1 = true,
         harga2 = true, harga3 = true, harga4 = true, harga5 = true,
         harga6 = true, harga7 = true;
    ambilDataBarang.open("data/databarang.txt");
    while (!ambilDataBarang.eof())
    {
        if (nama0 == true)
        {
            ambilDataBarang >> namaBarang[0];
            nama0 = false;
        }
        else if (jumlah0 == true)
        {
            ambilDataBarang >> jumlahBarang[0];
            jumlah0 = false;
        }
        else if (harga0 == true)
        {
            ambilDataBarang >> hargaBarang[0];
            harga0 = false;
        }
        else if (nama1 == true)
        {
            ambilDataBarang >> namaBarang[1];
            nama1 = false;
        }
        else if (jumlah1 == true)
        {
            ambilDataBarang >> jumlahBarang[1];
            jumlah1 = false;
        }
        else if (harga1 == true)
        {
            ambilDataBarang >> hargaBarang[1];
            harga1 = false;
        }
        else if (nama2 == true)
        {
            ambilDataBarang >> namaBarang[2];
            nama2 = false;
        }
        else if (jumlah2 == true)
        {
            ambilDataBarang >> jumlahBarang[2];
            jumlah2 = false;
        }
        else if (harga2 == true)
        {
            ambilDataBarang >> hargaBarang[2];
            harga2 = false;
        }
        else if (nama3 == true)
        {
            ambilDataBarang >> namaBarang[3];
            nama3 = false;
        }
        else if (jumlah3 == true)
        {
            ambilDataBarang >> jumlahBarang[3];
            jumlah3 = false;
        }
        else if (harga3 == true)
        {
            ambilDataBarang >> hargaBarang[3];
            harga3 = false;
        }
        else if (nama4 == true)
        {
            ambilDataBarang >> namaBarang[4];
            nama4 = false;
        }
        else if (jumlah4 == true)
        {
            ambilDataBarang >> jumlahBarang[4];
            jumlah4 = false;
        }
        else if (harga4 == true)
        {
            ambilDataBarang >> hargaBarang[4];
            harga4 = false;
        }
        else if (nama5 == true)
        {
            ambilDataBarang >> namaBarang[5];
            nama5 = false;
        }
        else if (jumlah5 == true)
        {
            ambilDataBarang >> jumlahBarang[5];
            jumlah5 = false;
        }
        else if (harga5 == true)
        {
            ambilDataBarang >> hargaBarang[5];
            harga5 = false;
        }
        else if (nama6 == true)
        {
            ambilDataBarang >> namaBarang[6];
            nama6 = false;
        }
        else if (jumlah6 == true)
        {
            ambilDataBarang >> jumlahBarang[6];
            jumlah6 = false;
        }
        else if (harga6 == true)
        {
            ambilDataBarang >> hargaBarang[6];
            harga6 = false;
        }
        else if (nama7 == true)
        {
            ambilDataBarang >> namaBarang[7];
            nama7 = false;
        }
        else if (jumlah7 == true)
        {
            ambilDataBarang >> jumlahBarang[7];
            jumlah7 = false;
        }
        else if (harga7 == true)
        {
            ambilDataBarang >> hargaBarang[7];
            harga7 = false;
        }
    }
    ambilDataBarang.close();
}
void Proses::keranjang()
{
    ambilDataBarang.open("data/keranjang.txt", ios::in);
    bool buku = true, penghapus = true, penggaris = true, lem = true,
         pensil = true, cat = true, kuas = true, palet = true;
    while (!ambilDataBarang.eof())
    {
        if (buku == true)
        {
            ambilDataBarang >> jumlahBeli[0];
            buku = false;
        }
        else if (pensil == true)
        {
            ambilDataBarang >> jumlahBeli[1];
            pensil = false;
        }
        else if (penghapus == true)
        {
            ambilDataBarang >> jumlahBeli[2];
            penghapus = false;
        }
        else if (penggaris == true)
        {
            ambilDataBarang >> jumlahBeli[3];
            penggaris = false;
        }
        else if (lem == true)
        {
            ambilDataBarang >> jumlahBeli[4];
            lem = false;
        }
        else if (cat == true)
        {
            ambilDataBarang >> jumlahBeli[5];
            cat = false;
        }
        else if (kuas == true)
        {
            ambilDataBarang >> jumlahBeli[6];
            kuas = false;
        }
        else if (palet == true)
        {
            ambilDataBarang >> jumlahBeli[7];
            palet = false;
        }
    }
    ambilDataBarang.close();
}
void Proses::hitung()
{
    for (int i = 0; i < 8; i++)
    {
        total += (jumlahBeli[i] * hargaBarang[i]);
    }
}
void Proses::simpan()
{
    tulisDataBeli.open("data/totalbelanja.txt");
    for (int i = 0; i < 8; i++)
    {
        tulisDataBeli << namaBarang[i] << endl;
        tulisDataBeli << jumlahBarang[i] << endl;
        tulisDataBeli << hargaBarang[i] << endl;
        tulisDataBeli << jumlahBeli[i] << endl;
    }
    tulisDataBeli << total;
    tulisDataBeli.close();
}