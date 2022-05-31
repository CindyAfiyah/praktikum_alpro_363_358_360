using namespace std;

class Input
{
public:
	void salam();
	void barang();
	void belanja();
	void simpan();

private:
	ifstream ambilDataBarang;
	ofstream tulisBarangBeli;
	string namaBarang[8];
	int jumlahBarang[8], jumlahBeli[8], buku = 0, penghapus = 0, penggaris = 0,
										lem = 0, pensil = 0, cat = 0, kuas = 0,
										palet = 0;
	float hargaBarang[8];
};
void Input::salam()
{
	system("cls");
	cout << "\nSelamat datang!, silahkan berbelanja" << endl;
}
void Input::barang()
{
	bool nama0 = true, nama1 = true, nama2 = true, nama3 = true, nama4 = true,
		 nama5 = true, nama6 = true, nama7 = true, jumlah0 = true, jumlah1 = true,
		 jumlah2 = true, jumlah3 = true, jumlah4 = true, jumlah5 = true,
		 jumlah6 = true, jumlah7 = true, harga0 = true, harga1 = true,
		 harga2 = true, harga3 = true, harga4 = true, harga5 = true,
		 harga6 = true, harga7 = true;
	ambilDataBarang.open("data/databarang.txt");
	while (!ambilDataBarang.eof())
	{
		if (nama0 == true)
		{
			ambilDataBarang >> namaBarang[0];
			nama0 = false;
		}
		else if (jumlah0 == true)
		{
			ambilDataBarang >> jumlahBarang[0];
			jumlah0 = false;
		}
		else if (harga0 == true)
		{
			ambilDataBarang >> hargaBarang[0];
			harga0 = false;
		}
		else if (nama1 == true)
		{
			ambilDataBarang >> namaBarang[1];
			nama1 = false;
		}
		else if (jumlah1 == true)
		{
			ambilDataBarang >> jumlahBarang[1];
			jumlah1 = false;
		}
		else if (harga1 == true)
		{
			ambilDataBarang >> hargaBarang[1];
			harga1 = false;
		}
		else if (nama2 == true)
		{
			ambilDataBarang >> namaBarang[2];
			nama2 = false;
		}
		else if (jumlah2 == true)
		{
			ambilDataBarang >> jumlahBarang[2];
			jumlah2 = false;
		}
		else if (harga2 == true)
		{
			ambilDataBarang >> hargaBarang[2];
			harga2 = false;
		}
		else if (nama3 == true)
		{
			ambilDataBarang >> namaBarang[3];
			nama3 = false;
		}
		else if (jumlah3 == true)
		{
			ambilDataBarang >> jumlahBarang[3];
			jumlah3 = false;
		}
		else if (harga3 == true)
		{
			ambilDataBarang >> hargaBarang[3];
			harga3 = false;
		}
		else if (nama4 == true)
		{
			ambilDataBarang >> namaBarang[4];
			nama4 = false;
		}
		else if (jumlah4 == true)
		{
			ambilDataBarang >> jumlahBarang[4];
			jumlah4 = false;
		}
		else if (harga4 == true)
		{
			ambilDataBarang >> hargaBarang[4];
			harga4 = false;
		}
		else if (nama5 == true)
		{
			ambilDataBarang >> namaBarang[5];
			nama5 = false;
		}
		else if (jumlah5 == true)
		{
			ambilDataBarang >> jumlahBarang[5];
			jumlah5 = false;
		}
		else if (harga5 == true)
		{
			ambilDataBarang >> hargaBarang[5];
			harga5 = false;
		}
		else if (nama6 == true)
		{
			ambilDataBarang >> namaBarang[6];
			nama6 = false;
		}
		else if (jumlah6 == true)
		{
			ambilDataBarang >> jumlahBarang[6];
			jumlah6 = false;
		}
		else if (harga6 == true)
		{
			ambilDataBarang >> hargaBarang[6];
			harga6 = false;
		}
		else if (nama7 == true)
		{
			ambilDataBarang >> namaBarang[7];
			nama7 = false;
		}
		else if (jumlah7 == true)
		{
			ambilDataBarang >> jumlahBarang[7];
			jumlah7 = false;
		}
		else if (harga7 == true)
		{
			ambilDataBarang >> hargaBarang[7];
			harga7 = false;
		}
	}
	ambilDataBarang.close();
}
void Input::belanja()
{
	cout << "\nBarang yang tersedia : " << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << i + 1 << ". " << namaBarang[i] << endl;
		cout << "   tersedia : " << jumlahBarang[i] << " buah" << endl;
		cout << "   harga : $" << hargaBarang[i] << endl;
	}
	bool beli = true;
	int idBarang, jumlah;
	char lanjut;
	while (beli == true)
	{
		cout << "\nPilih barang dengan angka : ";
		cin >> idBarang;
		switch (idBarang)
		{
		case 1:
			cout << "Masukkan jumlah yang akan dibeli : ";
			cin >> jumlah;
			buku += jumlah;
			break;
		case 2:
			cout << "Masukkan jumlah yang akan dibeli : ";
			cin >> jumlah;
			pensil += jumlah;
			break;
		case 3:
			cout << "Masukkan jumlah yang akan dibeli : ";
			cin >> jumlah;
			penghapus += jumlah;
			break;
		case 4:
			cout << "Masukkan jumlah yang akan dibeli : ";
			cin >> jumlah;
			penggaris += jumlah;
			break;
		case 5:
			cout << "Masukkan jumlah yang akan dibeli : ";
			cin >> jumlah;
			lem += jumlah;
			break;
		case 6:
			cout << "Masukkan jumlah yang akan dibeli : ";
			cin >> jumlah;
			cat += jumlah;
			break;
		case 7:
			cout << "Masukkan jumlah yang akan dibeli : ";
			cin >> jumlah;
			kuas += jumlah;
			break;
		case 8:
			cout << "Masukkan jumlah yang akan dibeli : ";
			cin >> jumlah;
			palet += jumlah;
			break;

		default:
			cout << "Angka yang anda masukkan salah";
			break;
		}
		cout << "Beli barang yang lain?(y/n) : ";
		cin >> lanjut;
		if (lanjut == 'y' || lanjut == 'Y')
		{
			beli = true;
		}
		else if (lanjut == 'n' || lanjut == 'N')
		{
			beli = false;
			cin.ignore();
		}
	}

	jumlahBeli[0] = buku;
	jumlahBeli[1] = pensil;
	jumlahBeli[2] = penghapus;
	jumlahBeli[3] = penggaris;
	jumlahBeli[4] = lem;
	jumlahBeli[5] = cat;
	jumlahBeli[6] = kuas;
	jumlahBeli[7] = palet;
	for (int i = 0; i < 8; i++)
	{
		cout << "\n"
			 << i + 1 << ". " << namaBarang[i] << endl;
		cout << "   jumlah : " << jumlahBeli[i] << " buah" << endl;
	}
}
void Input::simpan()
{
	tulisBarangBeli.open("data/keranjang.txt", ios::trunc);
	for (int i = 0; i < 8; i++)
	{
		if (i < 7)
		{
			tulisBarangBeli << jumlahBeli[i] << endl;
		}
		else
		{
			tulisBarangBeli << jumlahBeli[i];
		}
	}
	tulisBarangBeli.close();
}