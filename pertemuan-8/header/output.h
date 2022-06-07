using namespace std;
class Output {
public:
  void print() {
    cout << "\t\t\t Data Elektronik" << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    cout << "| Nama Barang | Stok | Harga | Jumlah |" << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    cout << dataBarang[0][0] << "     - " << dataBarang[0][1] << " - " << dataBarang[0][2] << "  - " << dataBarang[0][3] << endl;
    cout << dataBarang[1][0] << "    - " << dataBarang[1][1] << " - " << dataBarang[1][2] << "   - " << dataBarang[1][3] << endl;
    cout << dataBarang[2][0] << "   - " << dataBarang[2][1] << " - " << dataBarang[2][2] << "  - " << dataBarang[2][3] << endl;
    cout << dataBarang[3][0] << "  - " << dataBarang[3][1] << " - " << dataBarang[3][2] << "  - " << dataBarang[3][3] << endl;
    cout << dataBarang[4][0] << "  - " << dataBarang[4][1] << " - " << dataBarang[4][2] << " - " << dataBarang[4][3] << endl;
    cout << dataBarang[5][0] << " - " << dataBarang[5][1] << " - " << dataBarang[5][2] << " - " << dataBarang[5][3] << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Total harga           : " << total << endl;
  }
  void ambilDataBarang() {
    bool nama0 = true, nama1 = true, nama2 = true, nama3 = true, nama4 = true,
         nama5 = true, stok0 = true, stok1 = true, stok2 = true, stok3 = true,
         stok4 = true, stok5 = true, harga0 = true, harga1 = true,
         harga2 = true, harga3 = true, harga4 = true, harga5 = true;
    ambil_data.open("data/databarang.txt");
    while (!ambil_data.eof()) {
      if (nama0 != false) {
        ambil_data >> dataBarang[0][0];
        nama0 = false;
      } else if (stok0 != false) {
        ambil_data >> dataBarang[0][1];
        stok0 = false;
      } else if (harga0 != false) {
        ambil_data >> dataBarang[0][2];
        harga0 = false;
      } else if (nama1 != false) {
        ambil_data >> dataBarang[1][0];
        nama1 = false;
      } else if (stok1 != false) {
        ambil_data >> dataBarang[1][1];
        stok1 = false;
      } else if (harga1 != false) {
        ambil_data >> dataBarang[1][2];
        harga1 = false;
      } else if (nama2 != false) {
        ambil_data >> dataBarang[2][0];
        nama2 = false;
      } else if (stok2 != false) {
        ambil_data >> dataBarang[2][1];
        stok2 = false;
      } else if (harga2 != false) {
        ambil_data >> dataBarang[2][2];
        harga2 = false;
      } else if (nama3 != false) {
        ambil_data >> dataBarang[3][0];
        nama3 = false;
      } else if (stok3 != false) {
        ambil_data >> dataBarang[3][1];
        stok3 = false;
      } else if (harga3 != false) {
        ambil_data >> dataBarang[3][2];
        harga3 = false;
      } else if (nama4 != false) {
        ambil_data >> dataBarang[4][0];
        nama4 = false;
      } else if (stok4 != false) {
        ambil_data >> dataBarang[4][1];
        stok4 = false;
      } else if (harga4 != false) {
        ambil_data >> dataBarang[4][2];
        harga4 = false;
      } else if (nama5 != false) {
        ambil_data >> dataBarang[5][0];
        nama5 = false;
      } else if (stok5 != false) {
        ambil_data >> dataBarang[5][1];
        stok5 = false;
      } else if (harga5 != false) {
        ambil_data >> dataBarang[5][2];
        harga5 = false;
      }
    }
    ambil_data.close();
  }
  void ambilDataBelanja() {
    bool harga = true, samsung = true, sandisk = true, logitech = true, wd = true, garmin = true, epson = true;
    ambil_data.open("data/databeli.txt");
    while(!ambil_data.eof()) {
      if(harga != false) {
        ambil_data >> total;
        harga = false;
      } else if(samsung != false) {
        ambil_data >> dataBarang[0][3];
        samsung = false;
      } else if(sandisk != false) {
        ambil_data >> dataBarang[1][3];
        sandisk = false;
      } else if(logitech != false) {
        ambil_data >> dataBarang[2][3];
        logitech = false;
      } else if(wd != false) {
        ambil_data >> dataBarang[3][3];
        wd = false;
      } else if(garmin != false) {
        ambil_data >> dataBarang[4][3];
        garmin = false;
      } else if(epson != false) {
        ambil_data >> dataBarang[5][3];
        epson = false;
      }
    }
    ambil_data.close();
  }

private:
  string dataBarang[6][4], total;
  fstream ambil_data;
};
// barang[6][3]
// samsung evo  30 200000
// sandisk 16gb 45 60000
// 00 01 02
// 10 11 12
// 20 21 22
// 30 31 32
// 40 41 42
// 50 51 52
// 60 61 61
