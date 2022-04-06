#include <iostream>
#include <fstream>
#include "kolaborasi/library/input.h"
#include "kolaborasi/library/output.h"
#include "kolaborasi/library/proses.h"

int main(){
  Input input;
  input.cetak();
  input.toFile();

  Proses proses;
  proses.getData();
  proses.toFile();

  Output output;
  output.getData();
  output.cetak();

  return 0;
}