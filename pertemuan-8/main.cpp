#include <iostream>
#include <string>
#include <fstream>
#include "header/input.h"
#include "header/proses.h"
#include "header/output.h"
using namespace std;
int main() {
  Input input;
  input.ambilDataBarang();
  input.keluar();

  Proses proses;
  proses.ambilDataBarang();
  proses.belanja();
  proses.hitung();
  proses.simpan();
  
  Output output;
  output.ambilDataBarang();
  output.ambilDataBelanja();
  output.print();
  
  return 0;
}