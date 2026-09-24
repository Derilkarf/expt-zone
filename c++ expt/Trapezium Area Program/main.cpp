#include <iostream>

int main () {
    double topBase, bottomBase, height, width;

    std::cout << "==========================\n";
    std::cout << "  Trapezium Area Program  \n";
    std::cout << "==========================\n";

    std::cout << "Input Top Base Width: ";
    std::cin >> topBase;

    std::cout << "Input Bottom Base Width: ";
    std::cin >> bottomBase;

    std::cout << "Input Trapezium Height: ";
    std::cin >> height;

    width = 0.5 * (topBase + bottomBase) * height;

    std::cout << "---------------\n";
    std::cout << "  Result : " << width << '\n';
    std::cout << "---------------\n";

    return 0;
}