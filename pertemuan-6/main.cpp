#include <iostream>
#include <fstream>
#include "header/input.h"
#include "header/proses.h"
#include "header/output.h"
using namespace std;

int main() {
  Input input;
  input.inputkan();
  input.simpan();

  Proses proses;
  proses.getData();
  proses.simpan();
  
  Output output;
  output.getData();
  output.cetak();
}