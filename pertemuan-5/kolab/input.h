using namespace std;

class Input {
public:
  void cetak() {
    cout << "Kalkulator UKT" << endl;
    cout << "Nama : ";
    cin >> nama;
    cout << "NIM : ";
    cin >> nim;
    for (int i = 0; i < 5; i++) {
      cin.ignore();
      cout << "Nama Matakuliah : ";
      getline(cin, matkul[i]);
      cout << "Jumlah SKS : ";
      cin >> sks[i];
    }
  }
  void toFile() {
    tulis_data.open("data/data.txt");
    tulis_data << nama << endl;
    tulis_data << nim << endl;
    for (int i = 0; i < 5; i++) {
      tulis_data << matkul[i] << endl;
    }
    for (int i = 0; i < 5; i++) {
      if (i < 4) {
        tulis_data << sks[i] << endl;
      } else {
        tulis_data << sks[i];
      }
    }
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  string nama, nim, matkul[5];
  int sks[5];
};