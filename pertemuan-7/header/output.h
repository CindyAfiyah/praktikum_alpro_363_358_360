using namespace std;

class Output {
public:
  void print() {
    cout << endl;
    cout << "\t\tData Stok Barang " << endl;
    cout << "------------------------------------------\n";
    cout << "| ID Barang\t | Nama Barang\t | Jumlah\t |\n";
    cout << "------------------------------------------\n";
    cout << "| " << data[1] << "\t\t | " << data[0] << " \t\t | " << data[2]
         << "\t\t | " << endl;
    cout << "| " << data[4] << "\t\t | " << data[3] << " \t\t | " << data[5]
         << "\t\t | " << endl;
    cout << "| " << data[7] << "\t\t | " << data[6] << " \t\t | " << data[8]
         << "\t\t | " << endl;
    cout << "| " << data[10] << "\t\t | " << data[9] << " \t\t | " << data[11]
         << "\t\t | " << endl;
    cout << "| " << data[13] << "\t\t | " << data[12] << " \t\t | " << data[14]
         << "\t\t | " << endl;
    cout << "------------------------------------------\n\n";
    cout << "masukkan id barang : ";
    cin >> id;
    for (int i = 0; i < 5; i++) {
      if (barang[i].idBarang == id) {
        cout << "------------------------------------------\n";
        cout << "| ID Barang\t | Nama Barang\t | Jumlah\t |\n";
        cout << "------------------------------------------\n";
        cout << "| " << barang[i].idBarang << "\t\t | " << barang[i].namaBarang
             << " \t\t | " << barang[i].jumlahBarang << "\t\t | " << endl;
        cout << "------------------------------------------\n\n";
      }
    }
  }
  void getData() {
    ambilData.open("data/urut.txt");
    while (!ambilData.eof()) {
      ambilData >> data[i];
      i += 1;
    }
    ambilData.close();
    barang[0].namaBarang = data[0];
    barang[1].namaBarang = data[3];
    barang[2].namaBarang = data[6];
    barang[3].namaBarang = data[9];
    barang[4].namaBarang = data[12];
    barang[0].idBarang = data[1];
    barang[1].idBarang = data[4];
    barang[2].idBarang = data[7];
    barang[3].idBarang = data[10];
    barang[4].idBarang = data[13];
    barang[0].jumlahBarang = data[2];
    barang[1].jumlahBarang = data[5];
    barang[2].jumlahBarang = data[8];
    barang[3].jumlahBarang = data[11];
    barang[4].jumlahBarang = data[14];
  }

private:
  ifstream ambilData;
  string data[15], id;
  int i = 0;
  struct {
    string namaBarang, idBarang, jumlahBarang;
  } barang[5];
};