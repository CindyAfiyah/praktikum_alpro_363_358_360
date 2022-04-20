#include <iostream>
#include <fstream>
#include "kolab/input.h"
#include "kolab/output.h"
#include "kolab/proses.h"

using namespace std;

int main()
{
  Input input;
  // input.cetak();
  // input.toFile();

  Proses proses;
  proses.getData();
  proses.toFile();

  Output output;
  output.getData();
  output.cetak();
}