using namespace std;

class Input
{
public:
  void cetak()
  {
    // menerima input
    cout << "Aplikasi Tabungan" << endl;
    for (int i = 0; i < 12; i++)
    {
      cout << "Pemasukan Anda bulan ke-" << i + 1 << " : ";
      cin >> masuk[i];
    }
    for (int i = 0; i < 12; i++)
    {
      cout << "Pengeluaran Anda bulan ke-" << i + 1 << " : ";
      cin >> keluar[i];
    }
  }
  void toFile()
  {
    // menulis data
    tulis_data.open("data/data.txt");
    for (int i = 0; i < 12; i++)
    {
      tulis_data << masuk[i] << endl;
    }
    for (int j = 0; j < 12; j++)
    {
      if (j < 11)
      {
        tulis_data << keluar[j] << endl;
      }
      else
      {
        tulis_data << keluar[j];
      }
    }
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  double masuk[12], keluar[12];
};