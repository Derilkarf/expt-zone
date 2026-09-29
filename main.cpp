#include <ctime>
#include <iostream>

int main() {
  srand(time(0));
  int randNum = rand() % 3 + 1;

  switch (randNum) {
  case 1:
    std::cout << "Tired Boss\n";
    break;
  case 2:
    std::cout << "Moderate\n";
    break;
  case 3:
    std::cout << "Very Excited Boss\n";
    break;
  }

  return 0;
}
