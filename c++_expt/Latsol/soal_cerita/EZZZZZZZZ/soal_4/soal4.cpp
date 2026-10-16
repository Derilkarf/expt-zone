#include <iostream>
#include <cmath>

int main() {
  float hargaMonitor = 1500000.0f;
  float uangTabungan = 350000.0f;
  float uangSakuHarian = 50000.0f;
  float biayaMakan = 20000.0f;
  float biayaBensin = 10000.0f;

  float uangKini = uangSakuHarian - biayaMakan - biayaBensin;
  float hariYangDibutuhkan = std::ceil((hargaMonitor - uangTabungan) / uangKini);
  std::cout << "Hari tersisa: " << hariYangDibutuhkan << std::endl;
  return 0;
}
