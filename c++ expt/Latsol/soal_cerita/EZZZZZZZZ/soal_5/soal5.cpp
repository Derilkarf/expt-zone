#include <iostream>

int main(){
  constexpr float cuci_standar = 40000.0f;
  constexpr float cuci_vakum = 20000.0f;

  float pelanggan_standar = cuci_standar * 5;
  float pelanggan_paket_komplit = (cuci_standar + cuci_vakum) * 3;

  float pendapatan_kotor = pelanggan_standar + pelanggan_paket_komplit;
  std::cout << "Total pendapatan Kotor: Rp" << pendapatan_kotor << std::endl;

  
  float nominal_karyawan = pendapatan_kotor * 0.10f;
  std::cout << "Total Nominal Karyawan: Rp" << nominal_karyawan << std::endl;

  float pendapatan_bersih = pendapatan_kotor - nominal_karyawan;
  std::cout << "Total pendapatan bersih: Rp" << pendapatan_bersih << std::endl;
  return 0;  
}
