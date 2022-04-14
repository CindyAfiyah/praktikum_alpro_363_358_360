using namespace std;

class Proses
{
public:
  void getData()
  {
    // ambil data
    ambil_data.open("data/data.txt");
    bool masuk1 = true, masuk2 = true, masuk3 = true, masuk4 = true, masuk5 = true, masuk6 = true, masuk7 = true, masuk8 = true, masuk9 = true, masuk10 = true, masuk11 = true, masuk12 = true, keluar1 = true, keluar2 = true, keluar3 = true, keluar4 = true, keluar5 = true, keluar6 = true, keluar7 = true, keluar8 = true, keluar9 = true, keluar10 = true, keluar11 = true, keluar12 = true;
    while (!ambil_data.eof())
    {
      if (masuk1 == true)
      {
        ambil_data >> pemasukkan1;
        masuk1 = false;
      }
      else if (masuk2 == true)
      {
        ambil_data >> pemasukkan2;
        masuk2 = false;
      }
      else if (masuk3 == true)
      {
        ambil_data >> pemasukkan3;
        masuk3 = false;
      }
      else if (masuk4 == true)
      {
        ambil_data >> pemasukkan4;
        masuk4 = false;
      }
      else if (masuk5 == true)
      {
        ambil_data >> pemasukkan5;
        masuk5 = false;
      }
      else if (masuk6 == true)
      {
        ambil_data >> pemasukkan6;
        masuk6 = false;
      }
      else if (masuk7 == true)
      {
        ambil_data >> pemasukkan7;
        masuk7 = false;
      }
      else if (masuk8 == true)
      {
        ambil_data >> pemasukkan8;
        masuk8 = false;
      }
      else if (masuk9 == true)
      {
        ambil_data >> pemasukkan9;
        masuk9 = false;
      }
      else if (masuk10 == true)
      {
        ambil_data >> pemasukkan10;
        masuk10 = false;
      }
      else if (masuk11 == true)
      {
        ambil_data >> pemasukkan11;
        masuk11 = false;
      }
      else if (masuk12 == true)
      {
        ambil_data >> pemasukkan12;
        masuk12 = false;
      }
      else if (keluar1 == true)
      {
        ambil_data >> pengeluaran1;
        keluar1 = false;
      }
      else if (keluar2 == true)
      {
        ambil_data >> pengeluaran2;
        keluar2 = false;
      }
      else if (keluar3 == true)
      {
        ambil_data >> pengeluaran3;
        keluar3 = false;
      }
      else if (keluar4 == true)
      {
        ambil_data >> pengeluaran4;
        keluar4 = false;
      }
      else if (keluar5 == true)
      {
        ambil_data >> pengeluaran5;
        keluar5 = false;
      }
      else if (keluar6 == true)
      {
        ambil_data >> pengeluaran6;
        keluar6 = false;
      }
      else if (keluar7 == true)
      {
        ambil_data >> pengeluaran7;
        keluar7 = false;
      }
      else if (keluar8 == true)
      {
        ambil_data >> pengeluaran8;
        keluar8 = false;
      }
      else if (keluar9 == true)
      {
        ambil_data >> pengeluaran9;
        keluar9 = false;
      }
      else if (keluar10 == true)
      {
        ambil_data >> pengeluaran10;
        keluar10 = false;
      }
      else if (keluar11 == true)
      {
        ambil_data >> pengeluaran11;
        keluar11 = false;
      }
      else if (keluar12 == true)
      {
        ambil_data >> pengeluaran12;
      }
    }
    ambil_data.close();
  }
  void toFile()
  {
    float pengeluaran[12] = {pengeluaran1, pengeluaran2, pengeluaran3, pengeluaran4, pengeluaran5, pengeluaran6, pengeluaran7, pengeluaran8, pengeluaran9, pengeluaran10, pengeluaran11, pengeluaran12};
    float pemasukkan[12] = {pemasukkan1, pemasukkan2, pemasukkan3, pemasukkan4, pemasukkan5, pemasukkan6, pemasukkan7, pemasukkan8, pemasukkan9, pemasukkan10, pemasukkan11, pemasukkan12};
    // menghitung pemasukkan
    for (int i = 0; i < 11; i++)
    {
      tabungan += pemasukkan[i];
    }
    // menghitung pengeluaran
    for (int i = 0; i < 11; i++)
    {
      outcome += pengeluaran[i];
    }
    // menghitung tabungan yang tersisa setelah dikurangi pengeluaran
    float tabunganSekarang = tabungan - outcome;
    // menghitung rata-rata pengeluaran setiap bulan
    float averagePengeluaran = outcome / 12;
    tulis_data.open("data/data_proses.txt");
    tulis_data << tabungan << endl;           // 0
    tulis_data << outcome << endl;            // 1
    tulis_data << averagePengeluaran << endl; // 2
    tulis_data << tabunganSekarang;           // 3
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  float pengeluaran1;
  float pengeluaran2;
  float pengeluaran3;
  float pengeluaran4;
  float pengeluaran5;
  float pengeluaran6;
  float pengeluaran7;
  float pengeluaran8;
  float pengeluaran9;
  float pengeluaran10;
  float pengeluaran11;
  float pengeluaran12;
  float outcome = 0;
  float pemasukkan1;
  float pemasukkan2;
  float pemasukkan3;
  float pemasukkan4;
  float pemasukkan5;
  float pemasukkan6;
  float pemasukkan7;
  float pemasukkan8;
  float pemasukkan9;
  float pemasukkan10;
  float pemasukkan11;
  float pemasukkan12;
  float tabungan = 0;
};