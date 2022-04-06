using namespace std;
class Proses
{
public:
	void cetak()
	{
		cout << "Anda sebagai Proses \n";
	}
	void getData()
	{
		ambil_data.open("api_data.txt");
		bool ayamGeprek = true;
		bool ayamGoreng = true;
		bool cumiGoreng = true;
		bool udangGoreng = true;
		bool ayamBakar = true;
		while (!ambil_data.eof())
		{
			if (ayamGeprek == true)
			{
				ambil_data >> jumlahAyamGeprek;
				ayamGeprek = false;
			}
			else if (ayamGoreng == true)
			{
				ambil_data >> jumlahAyamGoreng;
				ayamGoreng = false;
			}
			else if (udangGoreng == true)
			{
				ambil_data >> jumlahUdangGoreng;
				udangGoreng = false;
			}
			else if (cumiGoreng == true)
			{
				ambil_data >> jumlahCumiGoreng;
				cumiGoreng = false;
			}
			else if (ayamBakar == true)
			{
				ambil_data >> jumlahAyamBakar;
				ayamBakar = false;
			}
			else
			{
				ambil_data >> jarakRumah;
			}
		}
		ambil_data.close();
	}
	void toFile()
	{
		int total = (hargaAyamGeprek * jumlahAyamGeprek) + (hargaAyamGoreng * jumlahAyamGoreng) + (hargaUdangGoreng * jumlahUdangGoreng) + (hargaAyamBakar * jumlahAyamBakar) + (hargaCumiGoreng * jumlahCumiGoreng);
		float hargaFinal;
		float batas1 = 25000;
		float batas2 = 50000;
		float batas3 = 150000;

		// hitung ongkir
		if (jarakRumah > 3)
		{
			ongkir = 25000;
		}
		else if (jarakRumah <= 3 && jarakRumah > 0)
		{
			ongkir = 15000;
		}

		// menentukan dan menghitung diskon
		float diskon = 0;
		float hargaDiskon = float(total);
		if (total > batas3)
		{
			diskon = 0.35;
			hargaDiskon = total * diskon;
		}
		else if (total > batas2)
		{
			diskon = 0.15;
			hargaDiskon = total * diskon;
		}

		if (total >= batas3)
		{
			ongkir = ongkir - 8000;
			hargaFinal = ongkir + (total - hargaDiskon);
			cout << "ongkir : " << ongkir << endl;
		}
		else if (total >= batas2)
		{
			ongkir = ongkir - 8000;
			hargaFinal = ongkir + (total - hargaDiskon);
		}
		else if (total >= batas1)
		{
			ongkir = ongkir - 8000;
			hargaFinal = ongkir + total;
			cout << "ongkir : " << ongkir << endl;
		}
		else
		{
			hargaFinal = ongkir + total;
		}

		// output
		tulis_data.open("api_data.txt");
		tulis_data << total << endl;
		tulis_data << hargaDiskon << endl;
		tulis_data << ongkir << endl;
		tulis_data << hargaFinal << endl;
		tulis_data << jumlahAyamGeprek << endl;
		tulis_data << jumlahAyamGoreng << endl;
		tulis_data << jumlahUdangGoreng << endl;
		tulis_data << jumlahCumiGoreng << endl;
		tulis_data << jumlahAyamBakar;
		tulis_data.close();
	}

private:
	ifstream ambil_data;
	ofstream tulis_data;
	int jumlahAyamGeprek;
	int jumlahAyamGoreng;
	int jumlahUdangGoreng;
	int jumlahCumiGoreng;
	int jumlahAyamBakar;
	int hargaAyamGeprek = 21000;
	int hargaAyamGoreng = 17000;
	int hargaUdangGoreng = 19000;
	int hargaCumiGoreng = 20000;
	int hargaAyamBakar = 25000;
	int ongkir = 15000;
	int jarakRumah;
};
