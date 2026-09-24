#include <iostream>

int main() {
    // && = check if two conditions are true
    // ||  = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;
    bool rain = true;


    std::cout << "Enter Temperature In Celcius: ";
    std::cin >> temp;

    if (temp <= 0 || temp >= 40) {
        std::cout << "Temperature is bad!\n"; 
    } else {
        std::cout << "Temperature is good!\n";
    }

    if(!rain) {
        std::cout << "It's a beautiful day outside";
    } else {
        std::cout << "It's raining somewhere else";
    }

    return 0;
}