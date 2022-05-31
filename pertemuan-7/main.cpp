#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
// #include "header/input.h"
#include "header/proses.h"
#include "header/output.h"
using namespace std;

int main() {
  // Input input;
  Proses proses;
  Output output;

  // input.print();
  // input.data();
  // input.file();

  proses.ambil();
  proses.sorting();

  output.getData();
  output.print();
}