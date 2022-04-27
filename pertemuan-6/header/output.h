using namespace std;
class Output {
public:
  void cetak() {
    cout << "Nama Dosen : " << data[0] << endl;
    cout << "Mata Kuliah dan nilai :\n" << data[1] << " = " << data[6] << "\n"
         << data[2] << " = " << data[7] << "\n"
         << data[3] << " = " << data[8] << "\n"
         << data[4] << " = " << data[9] << "\n"
         << data[5] << " = " << data[10] << endl;
    cout << "Nilai Max : " << data[11] << endl;
    cout << "Nilai Min : " << data[12] << endl;
    cout << "Rata-rata : " << data[13] << endl;
  }
  void getData() {
    ambil_data.open("data/proses.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data[i];
      i += 1;
    }
    ambil_data.close();
  }

private:
  ifstream ambil_data;
  string data[100];
  int i = 0;
};