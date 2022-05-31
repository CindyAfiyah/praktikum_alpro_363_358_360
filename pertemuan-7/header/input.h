using namespace std;

class Input{
  public:
    void print(){
      cout<<"         Selamat Datang\n";
      cout<<" di Toko Kelontong Bapak Hanif \n";
      cout<<"-------------------------------\n";
    }
    void data(){
      for(int i = 0; i < 5; i++){
        cout<<"\nNama Barang\t\t : ";
        getline(cin,namaBarang[i]);
        cout<<"ID Barang\t\t : ";
        getline(cin,idBarang[i]);
        cout<<"Jumlah Barang\t : ";
        cin>>jumlahBarang[i];
        cin.ignore();
      }
    }
    void file(){
      simpanData.open("data/databarang.txt");
      for(int i=0; i<5; i++){
        simpanData << namaBarang[i] <<endl;
        simpanData << idBarang[i] << endl;
        simpanData << jumlahBarang[i] << endl;
        if(i==4){
          simpanData << namaBarang[i] <<endl;
          simpanData << idBarang[i] << endl;
          simpanData << jumlahBarang[i];
        }
      }
      simpanData.close();
    }
  private:
  int jumlahBarang[5];
  string idBarang[5], namaBarang[5];
  ofstream simpanData;
};