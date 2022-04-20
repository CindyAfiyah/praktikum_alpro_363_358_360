using namespace std;

class Proses
{
public:
  void getData()
  {
    bool aNama = true, aNim = true, aSKS1 = true, aSKS2 = true, aSKS3 = true,
         aSKS4 = true, aSKS5 = true, aSKS6 = true, aSKS7 = true, aSKS8 = true,
         aSKS9 = true, aSKS10 = true, aMatkul1 = true, aMatkul2 = true,
         aMatkul3 = true, aMatkul4 = true, aMatkul5 = true;
    ambil_data.open("data/data.txt");
    while (!ambil_data.eof())
    {
      if (aNama == true)
      {
        ambil_data >> nama;
        aNama = false;
      }
      else if (aNim == true)
      {
        ambil_data >> nim;
        aNim = false;
      }
      else if (aMatkul1 == true)
      {
        ambil_data >> matkul[0];
        aMatkul1 = false;
      }
      else if (aMatkul2 == true)
      {
        ambil_data >> matkul[1];
        aMatkul2 = false;
      }
      else if (aMatkul3 == true)
      {
        ambil_data >> matkul[2];
        aMatkul3 = false;
      }
      else if (aMatkul4 == true)
      {
        ambil_data >> matkul[3];
        aMatkul4 = false;
      }
      else if (aMatkul5 == true)
      {
        ambil_data >> matkul[4];
        aMatkul5 = false;
      }
      else if (aSKS1 == true)
      {
        ambil_data >> sks[0];
        aSKS1 = false;
      }
      else if (aSKS2 == true)
      {
        ambil_data >> sks[1];
        aSKS2 = false;
      }
      else if (aSKS3 == true)
      {
        ambil_data >> sks[2];
        aSKS3 = false;
      }
      else if (aSKS4 == true)
      {
        ambil_data >> sks[3];
        aSKS4 = false;
      }
      else
      {
        ambil_data >> sks[4];
      }
    }
    ambil_data.close();
  }

  int hitungSks(int arr[], int batas)
  {
    if (batas > 4)
    {
      return totalSks;
    }
    else
    {
      totalSks += arr[batas];
      cout << "totalSks : " << totalSks << endl;
      return hitungSks(arr, batas + 1);
    }
  }

  void toFile()
  {
    hitungSks(sks, 0);
    cout << "totalSks : " << totalSks << endl;
    total = totalSks * 120000;
    cout << "total : " << total << endl;
    hargaDiskon1 = total * diskon1;
    cout << "hargaDiskon1 : " << hargaDiskon1 << endl;
    hargaDiskon2 = (total - hargaDiskon1) * diskon2;
    cout << "hargaDiskon2 : " << hargaDiskon2 << endl;
    cout << "hargadiskon1 + hargadiskon2 = " << hargaDiskon1 + hargaDiskon2 << endl;
    totalFinal = total - (hargaDiskon1 + hargaDiskon2);
    cout << "totalFinal : " << totalFinal << endl;
    tulis_data.open("data/data_proses.txt");
    tulis_data << nama << endl;
    tulis_data << nim << endl;
    for (int i = 0; i < 5; i++)
    {
      tulis_data << matkul[i] << endl;
    }
    for (int i = 0; i < 5; i++)
    {
      tulis_data << sks[i] << endl;
    }
    tulis_data << totalSks << endl;
    tulis_data << totalFinal;
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  int sks[5], totalSks = 0;
  string matkul[5];
  long int total, hargaDiskon1, hargaDiskon2, totalFinal;
  float diskon1 = 0.1, diskon2 = 0.05;
  string nama, nim;
};