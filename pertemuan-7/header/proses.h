using namespace std;

class Proses {
public:
  void ambil() {
    ambilData.open("data/databarang.txt");
    bool n0 = 1, n1 = 1, n2 = 1, n3 = 1, n4 = 1, d0 = 1, d1 = 1, d2 = 1, d3 = 1,
         d4 = 1, j0 = 1, j1 = 1, j2 = 1, j3 = 1, j4 = 1;
    while (!ambilData.eof()) {
      if (n0 == 1) {
        ambilData >> barang[0].namaBarang;
        n0 = 0;
      } else if (d0 == 1) {
        ambilData >> barang[0].idBarang;
        d0 = 0;
      } else if (j0 == 1) {
        ambilData >> barang[0].jumlahBarang;
        j0 = 0;
      } else if (n1 == 1) {
        ambilData >> barang[1].namaBarang;
        n1 = 0;
      } else if (d1 == 1) {
        ambilData >> barang[1].idBarang;
        d1 = 0;
      } else if (j1 == 1) {
        ambilData >> barang[1].jumlahBarang;
        j1 = 0;
      } else if (n2 == 1) {
        ambilData >> barang[2].namaBarang;
        n2 = 0;
      } else if (d2 == 1) {
        ambilData >> barang[2].idBarang;
        d2 = 0;
      } else if (j2 == 1) {
        ambilData >> barang[2].jumlahBarang;
        j2 = 0;
      } else if (n3 == 1) {
        ambilData >> barang[3].namaBarang;
        n3 = 0;
      } else if (d3 == 1) {
        ambilData >> barang[3].idBarang;
        d3 = 0;
      } else if (j3 == 1) {
        ambilData >> barang[3].jumlahBarang;
        j3 = 0;
      } else if (n4 == 1) {
        ambilData >> barang[4].namaBarang;
        n4 = 0;
      } else if (d4 == 1) {
        ambilData >> barang[4].idBarang;
        d4 = 0;
      } else if (j4 == 1) {
        ambilData >> barang[4].jumlahBarang;
        j4 = 0;
      }
    }
    ambilData.close();
  }
  void sorting() {
    int data[5] = {barang[0].jumlahBarang, barang[1].jumlahBarang,
                   barang[2].jumlahBarang, barang[3].jumlahBarang,
                   barang[4].jumlahBarang};
    int n = sizeof(data) / sizeof(data[0]);
    mergeSort(data, 0, n);
    int atad[5], j = 5;
    for(int i = 0; i < n; i++) {
      j--;
      atad[j] = data[i];
    }
    simpanData.open("data/urut.txt", ios::trunc);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (atad[i] == barang[j].jumlahBarang) {
          if (i < n - 1) {
            simpanData << barang[j].namaBarang << endl;
            simpanData << barang[j].idBarang << endl;
            simpanData << barang[j].jumlahBarang << endl;
          } else {
            simpanData << barang[j].namaBarang << endl;
            simpanData << barang[j].idBarang << endl;
            simpanData << barang[j].jumlahBarang;
          }
        }
      }
    }
    simpanData.close();
  }
  void swapping(int &a, int &b) {
    int sementara;
    sementara = a;
    a = b;
    b = sementara;
  }
  void merge(int *array, int l, int m, int r) {
    int i, j, k, nl, nr;
    nl = m - l + 1;
    nr = r - m;
    int larr[nl], rarr[nr];
    for (i = 0; i < nl; i++)
      larr[i] = array[l + i];
    for (j = 0; j < nr; j++)
      rarr[j] = array[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < nl && j < nr) {
      if (larr[i] <= rarr[j]) {
        array[k] = larr[i];
        i++;
      } else {
        array[k] = rarr[j];
        j++;
      }
      k++;
    }
    while (i < nl) {
      array[k] = larr[i];
      i++;
      k++;
    }
    while (j < nr) {
      array[k] = rarr[j];
      j++;
      k++;
    }
  }
  void mergeSort(int *array, int l, int r) {
    int m;
    if (l < r) {
      int m = l + (r - l) / 2;
      mergeSort(array, l, m);
      mergeSort(array, m + 1, r);
      merge(array, l, m, r);
    }
  }

private:
  ifstream ambilData;
  ofstream simpanData;
  struct {
    string namaBarang, idBarang;
    int jumlahBarang;
  } barang[5];
};