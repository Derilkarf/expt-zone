#include <iostream>

int main(){
  constexpr float hargaKemeja = 250000.0f;
  constexpr float hargaCelana = 300000.0f;

  float diskonKemeja = hargaKemeja * 0.15f;
  float diskonCelana = hargaCelana * 0.10f;
  float totalHarga = (hargaKemeja - diskonKemeja) + (hargaCelana - diskonCelana);

  std::cout << "Total Harga Yang Harus Dibayar Adalah: Rp" << totalHarga << std::endl;
  return 0;
}
