// #include <iostream>
// using namespace std;
// int jumlahPesanan, menu, totalHarga = 0, ayamGeprek = 21000, ayamGoreng = 17000, udangGoreng = 19000, cumiGoreng = 20000, ayamBakar = 25000, ongkir = 15000;
// float diskon = 0.15, hargaFinal, jarak;
// char y;
// bool lanjut = true;
// int main() {
//   while(lanjut == true) {
//   cout<<"----------------------------------"<<endl;
//   cout <<" Delivery Rumah Makan Kasih Ibu "<< endl;
//   cout<<"----------------------------------" <<endl;
//   cout << "         Daftar Menu" << endl;
//   cout << "1. Ayam Geprek\t: Rp. 21000" << endl;
//   cout << "2. Ayam Goreng\t: Rp. 17000" << endl;
//   cout << "3. Udang Goreng\t: Rp. 19000" << endl;
//   cout << "4. Cumi Bakar\t: Rp. 20000" << endl;
//   cout << "5. Ayam Bakar\t: Rp. 25000" << endl;
//     cout << "Masukkan Pilihan Menu : ";
//     cin >> menu;
//     cout << "Jumlah menu yang dipesan : ";
//     cin >> jumlahPesanan;
//   // cout << "6. Slip Pembayaran" << endl;
  
//   switch(menu){
//     case 1 :
//       cout<<"++++++++++++++++++++++++++\n";
//       cout<<"Ayam Geprek\n";
//       totalHarga += ayamGeprek * jumlahPesanan;
//       cout<<"Total harga : " << totalHarga << endl;
//       cout<<"++++++++++++++++++++++++++\n";
//       break;
//     case 2 :
//       cout<<"++++++++++++++++++++++++++\n";
//       cout<<"Ayam Goreng\n";
//       totalHarga += ayamGoreng * jumlahPesanan;
//       cout<<"Total harga : " << totalHarga << endl;
//       cout<<"++++++++++++++++++++++++++\n";
//       break;
//     case 3 :
//       cout<<"++++++++++++++++++++++++++\n";
//       cout<<"Udang Goreng\n";
//       totalHarga += udangGoreng * jumlahPesanan;
//       cout<<"Total harga : " << totalHarga << endl;
//       cout<<"++++++++++++++++++++++++++\n";
//       break;
//     case 4 :
//       cout<<"++++++++++++++++++++++++++\n";
//       cout<<"Cumi Goreng\n";
//       totalHarga += cumiGoreng * jumlahPesanan;
//       cout<<"Total harga : " << totalHarga << endl;
//       cout<<"++++++++++++++++++++++++++\n";
//       break;
//     case 5 : 
//       cout<<"++++++++++++++++++++++++++\n";
//       cout<<"Ayam Bakar\n";
//       totalHarga += ayamBakar * jumlahPesanan;
//       cout<<"Total harga : " << totalHarga << endl;
//       cout<<"++++++++++++++++++++++++++\n";
//       break;
//     default :
//     cout << "Pesanan Yang Anda Masukkan Salah" << endl;
//     break;
//   }
  
//   cout << "pilih menu lain? (y/n) : ";
//   cin >> y;
//   if(y == 'y' || y == 'Y') {
//     lanjut = true;
//   } else if(y == 'n' || y == 'N') {
//     lanjut = false;
//   }
//   }
//   cout << "masukkan jarak rumah (dalam km) : ";
//   cin >> jarak;
//   if(jarak <= 3) {
//     ongkir = 15000;
//   } else if(jarak > 3){
//     ongkir = 25000;
//   }
//   if(totalHarga > 25000) {
//     ongkir = ongkir - 3000;
//     hargaFinal = ongkir + totalHarga;
//   } else if(totalHarga > 5000) {
//     ongkir = ongkir - 5000;
//     hargaFinal = ongkir + (totalHarga * diskon);
//   }
//   system("clear");
//   cout << "==============================" << endl;
//   cout << "        Struk Pembelian    " << endl;
//   cout << "     RUMAH MAKAN KASIH IBU " << endl;
//   cout << "==============================" <<endl;
//   cout << "         Daftar Menu" << endl;
//   cout << "1. Ayam Geprek\t: Rp. 21000" << endl;
//   cout << "2. Ayam Goreng\t: Rp. 17000" << endl;
//   cout << "3. Udang Goreng\t: Rp. 19000" << endl;
//   cout << "4. Cumi Bakar\t: Rp. 20000" << endl;
//   cout << "5. Ayam Bakar\t: Rp. 25000" << endl << endl;
//   cout << "Harga pesanan = " << totalHarga << endl;
//   cout << "Ongkir        = " << ongkir << endl;
//   cout << "Total harga   = " << hargaFinal << endl;
//   cout << endl;
//   cout << "*** Terima Kasih ***" << endl;
  
//   return 0;
// }