#include <iostream>

int main(){
  int waktu_total = 135;
  int jam = waktu_total / 60;
  int menit = waktu_total % 60;
  std::cout << jam << " Jam " << menit << " Menit";
  return 0;
}
