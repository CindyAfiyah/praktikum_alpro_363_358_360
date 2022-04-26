using namespace std;
class Proses {
public:
  void getData() {
    bool dosenA = true, matkul1 = true, matkul2 = true, matkul3 = true,
         matkul4 = true, matkul5 = true, nilai1 = true, nilai2 = true,
         nilai3 = true, nilai4 = true, nilai5 = true;
    ambil_data.open("data/input.txt");
    while (!ambil_data.eof()) {
      if (dosenA == true) {
        ambil_data >> dosen;
        dosenA = false;
      } else if (matkul1 == true) {
        ambil_data >> matkul[0];
        matkul1 = false;
      } else if (matkul2 == true) {
        ambil_data >> matkul[1];
        matkul2 = false;
      } else if (matkul3 == true) {
        ambil_data >> matkul[2];
        matkul3 = false;
      } else if (matkul4 == true) {
        ambil_data >> matkul[3];
        matkul4 = false;
      } else if (matkul5 == true) {
        ambil_data >> matkul[4];
        matkul5 = false;
      } else if (nilai1 == true) {
        ambil_data >> nilai[0];
        nilai1 = false;
      } else if (nilai2 == true) {
        ambil_data >> nilai[1];
        nilai2 = false;
      } else if (nilai3 == true) {
        ambil_data >> nilai[2];
        nilai3 = false;
      } else if (nilai4 == true) {
        ambil_data >> nilai[3];
        nilai4 = false;
      } else if (nilai5 == true) {
        ambil_data >> nilai[4];
        nilai5 = false;
      }
    }
    ambil_data.close();
  }
  void simpan() {
    for (int i = 0; i < 5; i++) {
      jumlah += nilai[i];
    }
    // cout << "jumlah : " << jumlah << endl;
    float rata = jumlah / 5; //nggak mau jadi float
    // cout << "rata : " << rata << endl;
    max = nilai[0];
    min = nilai[0];
    for (int i = 1; i < 5; i++) {
      if (nilai[i] > max) {
        max = nilai[i];
      }
      if (nilai[i] < min) {
        min = nilai[i];
      }
    }
    tulis_data.open("data/proses.txt");
    tulis_data << dosen << endl;
    for (int i = 0; i < 5; i++) {
      tulis_data << matkul[i] << endl;
    }
    for (int i = 0; i < 5; i++) {
      tulis_data << nilai[i] << endl;
    }
    tulis_data << max << endl;
    tulis_data << min << endl;
    tulis_data << rata;
    tulis_data.close();
  }

private:
  // hanya variable disini
  ifstream ambil_data;
  ofstream tulis_data;
  string dosen, matkul[5];
  int nilai[5], max, min, jumlah = 0;
};