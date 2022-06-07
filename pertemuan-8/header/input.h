#include <fstream>
#include <string>
using namespace std;

class Input {
public:
  void ambilDataBarang() {
    bool nama0 = true, nama1 = true, nama2 = true, nama3 = true, nama4 = true,
         nama5 = true, stok0 = true, stok1 = true, stok2 = true, stok3 = true,
         stok4 = true, stok5 = true, harga0 = true, harga1 = true,
         harga2 = true, harga3 = true, harga4 = true, harga5 = true;
    ambil_data.open("data/databarang.txt");
    while (!ambil_data.eof()) {
      if (nama0 != false) {
        ambil_data >> data[0].namaBarang;
        nama0 = false;
      } else if (stok0 != false) {
        ambil_data >> data[0].stokBarang;
        stok0 = false;
      } else if (harga0 != false) {
        ambil_data >> data[0].hargaBarang;
        harga0 = false;
      } else if (nama1 != false) {
        ambil_data >> data[1].namaBarang;
        nama1 = false;
      } else if (stok1 != false) {
        ambil_data >> data[1].stokBarang;
        stok1 = false;
      } else if (harga1 != false) {
        ambil_data >> data[1].hargaBarang;
        harga1 = false;
      } else if (nama2 != false) {
        ambil_data >> data[2].namaBarang;
        nama2 = false;
      } else if (stok2 != false) {
        ambil_data >> data[2].stokBarang;
        stok2 = false;
      } else if (harga2 != false) {
        ambil_data >> data[2].hargaBarang;
        harga2 = false;
      } else if (nama3 != false) {
        ambil_data >> data[3].namaBarang;
        nama3 = false;
      } else if (stok3 != false) {
        ambil_data >> data[3].stokBarang;
        stok3 = false;
      } else if (harga3 != false) {
        ambil_data >> data[3].hargaBarang;
        harga3 = false;
      } else if (nama4 != false) {
        ambil_data >> data[4].namaBarang;
        nama4 = false;
      } else if (stok4 != false) {
        ambil_data >> data[4].stokBarang;
        stok4 = false;
      } else if (harga4 != false) {
        ambil_data >> data[4].hargaBarang;
        harga4 = false;
      } else if (nama5 != false) {
        ambil_data >> data[5].namaBarang;
        nama5 = false;
      } else if (stok5 != false) {
        ambil_data >> data[5].stokBarang;
        stok5 = false;
      } else if (harga5 != false) {
        ambil_data >> data[5].hargaBarang;
        harga5 = false;
      }
    }
    ambil_data.close();
  }
  void keluar() {
    for (int i = 0; i < 6; i++) {
      cout << "--------------------------------" << endl;
      cout << i + 1 << ". ";
      cout << "Nama barang : " << data[i].namaBarang << endl;
      cout << "   Stok        : " << data[i].stokBarang << endl;
      cout << "   Harga       : " << data[i].hargaBarang << endl;
    }
  }

private:
  struct {
    string namaBarang;
    int stokBarang;
    long int hargaBarang;
  } data[6];
  ifstream ambil_data;
};
// samsung evo -> nama barang (string)
// 30 -> stok (integer)
// 200000 -> harga (integer)