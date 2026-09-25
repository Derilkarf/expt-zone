#include <iostream>

int main() {
    double fahrenheit, celcius, kelvin, temp;
    char unit;

    std::cout << "========== Temperature Conversion ==========\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "K = Kelvin\n";
    std::cout << "Which one do you want to change to: ";
    std::cin >> unit;

    // UPDATED CODE

    while(unit != 'f' && unit != 'F' && unit != 'c' && unit != 'C' && unit != 'k' && unit != 'K' ) {
        std::cout << "Enter a valid Conversion (F C K): ";
        std::cin >> unit; 
    }
    

        if(unit == 'F' || unit == 'f'){
            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin >> temp;

            celcius = (temp - 32) / 1.8;
            kelvin = celcius + 273.15;
            std::cout << temp << "F is equal to " << celcius << "C and " << kelvin << "K\n"; 

        } else if (unit == 'K' || unit == 'k') {
            std::cout << "Enter the temperature in Kelvin: ";
            std::cin >> temp;

            celcius = temp - 273.15;
            fahrenheit = (celcius * 1.8) + 32;

            std::cout << temp << "K is equal to " << celcius << "C and " << fahrenheit << "F\n"; 

        }  else if (unit == 'C' || unit == 'c') {
            std::cout << "Enter the temperature in celcius: ";
            std::cin >> temp;

            kelvin = temp + 273.15;
            fahrenheit = (temp * 1.8) + 32;
            std::cout << temp << "C is equal to " << kelvin << "K and " << fahrenheit << "F\n"; 

        } else {
            std::cout << "Enter A Valid Unit!\n";
        }
        
    std::cout << "============================================\n";

    return 0;
}

/* OLD CODE (Ignore)

    std::cout << "Enter Temperature In Celcius: ";
    std::cin >> celcius;

    fahrenheit = (celcius * 1.8) + 32;

    std::cout << celcius << " degrees is equal to " << fahrenheit << " Fahrenheit" << '\n';

    std::cout << "Enter Temperature In Celcius: ";
    std::cin >> celcius;

    kelvin = celcius + 273.15;

    std::cout << celcius << " degrees is equal to " << kelvin << " Kelvin" << '\n';
*/