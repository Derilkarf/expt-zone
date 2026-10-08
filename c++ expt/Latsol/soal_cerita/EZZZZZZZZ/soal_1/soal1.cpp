#include <iostream>

int main(){
  constexpr float nasiGoreng = 15000.0f;
  constexpr float esTeh = 4000.0f;
  constexpr float uangJajan = 100000.0f;
  float totalBelanja = (nasiGoreng * 3) + (esTeh * 2);
  float totalKembalian = uangJajan - totalBelanja;

  std::cout << "Total Belanja Kamu Adalah: Rp" << totalBelanja << std::endl;
  std::cout << "Total Kembalian Kamu Adalah: Rp" << totalKembalian << std::endl;
  return 0;
}
