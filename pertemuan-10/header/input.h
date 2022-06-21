using namespace std;

class Nama {
  public:
    string data1;
    Nama *berikut;
};

void append_Nama(struct Nama **mulai1, string data) {
   struct Nama *node_baru = new Nama;
   node_baru->data1 = data;
   node_baru->berikut = (*mulai1);
   (*mulai1) = node_baru;
}

class Nim {
  public:
    string data2;
    Nim *berikut;
};

void append_Nim(struct Nim **mulai2, string data) {
   struct Nim *node_baru = new Nim;
   node_baru->data2 = data;
   node_baru->berikut = (*mulai2);
   (*mulai2) = node_baru;
}

void input() {
  Nama *mulai1 = NULL;
  Nim *mulai2 = NULL;
  string nama, nim;

  // input
  for (int i = 0; i < 5; i++) {
    cout << "Masukkan Nama \t: ";
    cin >> nama;
    cout << "Masukkan Nim \t: ";
    cin >> nim;
    append_Nama(&mulai1, nama);
    append_Nim(&mulai2, nim);
    cout << "\n";
  }
    cout << "\n";
    cout << "\n";

  // output
    cout << "Data Mahasiswa berhasil masuk ke babak final lomba Parmatika" << endl;
  while(mulai1 != NULL) {
    cout << "Nama \t: " << mulai1->data1;
    cout << "\n";
    cout << "NIM \t: " << mulai2->data2;
    cout << "\n\n";
    mulai1 = mulai1->berikut;
    mulai2 = mulai2->berikut;
  }
}