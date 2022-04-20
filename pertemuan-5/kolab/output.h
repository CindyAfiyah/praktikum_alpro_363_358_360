using namespace std;
class Output
{
public:
   void cetak()
  {
    cout << "-------------------------"<< endl;
    cout << "-----Info Pembayaran-----"<< endl;
    cout << "-------------------------"<< endl;
    cout << "Nama              : " << data_file[0] << endl;
    cout << "NIM               : " << data_file[1] << endl;
    cout << "Daftar Matakuliah : " << data_file[2] << endl;
    cout << "Jumlah SKS        : " << data_file[3] << endl;
    cout << "Total Pembayaran  : " << data_file[4] << endl;
  
  }
void getData()
{
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