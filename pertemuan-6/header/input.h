using namespace std;
class Input {
public:
  void inputkan() {
    cout << "Masukkan Nama Dosen : ";
    cin >> dosen;
    cout << "Masukkan Matakuliah dan nilai di bawah ini" << endl;
    for (int i = 0; i < 5; i++) {
      cout << "Matakuliah : ";
      cin.ignore();
      getline(cin, matkul[i]);
      cout << "Nilai\t : ";
      cin >> nilai[i];
    }
  }
  void simpan(){
    tulis_data.open("data/input.txt");
    tulis_data << dosen << endl;
    for(int i = 0; i < 5; i++){
      tulis_data << matkul[i] << endl;
    }
    for(int i = 0; i < 5; i++){
      if(i < 4){
        tulis_data << nilai[i] << endl;
      } else {
        tulis_data << nilai[i];
      }
    }
    tulis_data.close();
  }  

private:
  ofstream tulis_data;
  string dosen, matkul[5];
  int nilai[5];
};