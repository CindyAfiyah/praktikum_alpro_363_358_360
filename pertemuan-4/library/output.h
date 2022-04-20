using namespace std;

class Output
{
public:
  void cetak()
  {
    cout << "----------------------------" << endl;
    cout << "------Aplikasi Tabungan-----" << endl;
    cout << "----------------------------" << endl;
    cout << "Tabungan                           : " << data_file[0] << endl;
    cout << "Total Pengeluaran                  : " << data_file[1] << endl;
    cout << "Rata-rata pengeluaran setiap bulan : " << data_file[2] << endl;
    cout << "Total tabungan                     : " << data_file[3] << endl;
    cout << endl;
  }
  void getData()
  {
    // ambil data
    ambil_data.open("data/data_proses.txt");
    while (!ambil_data.eof())
    {
      ambil_data >> data_file[i];
      i += 1;
    }
    ambil_data.close();
  }

private:
  ifstream ambil_data;
  string data_file[30];
  int i = 0;
};