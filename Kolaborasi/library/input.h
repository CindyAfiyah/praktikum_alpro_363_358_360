using namespace std;

class Input
{
public:
  void cetak()
  {
    cout << "Aplikasi Penjualan Ayam \n";
    cout << "Menu yang tersedia : \n";
    cout << "1) Ayam Geprek   Rp. 21000 \n";
    cout << "2) Ayam Goreng   Rp. 17000 \n";
    cout << "3) Udang Goreng  Rp. 19000 \n";
    cout << "4) Cumi Goreng   Rp. 20000 \n";
    cout << "5) Ayam Bakar    Rp. 25000 \n";
    cout << "Pesan Ayam  Geprek => ";
    cin >> banyakAyamGeprek;
    cout << "Pesan Ayam  Goreng => ";
    cin >> banyakAyamGoreng;
    cout << "Pesan Udang Goreng => ";
    cin >> banyakUdangGoreng;
    cout << "Pesan Cumi  Goreng => ";
    cin >> banyakCumiGoreng;
    cout << "Pesan Ayam  Bakar  => ";
    cin >> banyakAyamBakar;
    cout << "masukkan jarak rumah : ";
    cin >> jarak;
  }
  void toFile()
  {
    tulis_data.open("api_data.txt");
    tulis_data << banyakAyamGeprek << endl;
    tulis_data << banyakAyamGoreng << endl;
    tulis_data << banyakUdangGoreng << endl;
    tulis_data << banyakCumiGoreng << endl;
    tulis_data << banyakAyamBakar << endl;
    tulis_data << jarak;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int banyakAyamGeprek, banyakAyamGoreng, banyakUdangGoreng, banyakCumiGoreng, banyakAyamBakar, jarak;
};