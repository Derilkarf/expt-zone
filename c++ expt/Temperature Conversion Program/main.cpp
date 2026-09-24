#include <iostream>

int main() {
    double fahrenheit, celcius, kelvin;

    std::cout << "Enter Temperature In Celcius: ";
    std::cin >> celcius;

    fahrenheit = (celcius * 1.8) + 32;

    std::cout << celcius << " degrees is equal to " << fahrenheit << " Fahrenheit" << '\n';

    std::cout << "Enter Temperature In Celcius: ";
    std::cin >> celcius;

    kelvin = celcius + 273.15;

    std::cout << celcius << " degrees is equal to " << kelvin << " Kelvin" << '\n';

    return 0;
}