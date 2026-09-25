#include <iostream>

int main() {
    int battery = 30;

    while (battery < 100) {
        std::cout << "Charging.... " << battery << "%\n";
        battery += 10;
    }
    std::cout << "Battery Full! " << battery << "%\n";
    return 0;
}