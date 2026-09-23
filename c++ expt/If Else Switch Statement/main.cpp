#include <iostream>

int main() {
    //if statement
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "The number is positive." << '\n';
        
    } else if (number <= 0) {
        std::cout << "The number is negative or zero." << '\n';
    } else {
        std::cout << "Unidentified number." << '\n';
    }

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "Just rest in your house Gramps!" << '\n';
    } else if (age >= 18) {
        std::cout << "You are an adult." << '\n';
    } else if (age <= 0) {
        std::cout << "Nah vro what are you, embrio?" << '\n';  
    } else {
        std::cout << "Maybe you still need some parental support" << '\n';
    }

    //switch = alternative to using many "if else" statement
    char comboStyle;
    std::cout << "Combo Result: ";
    std::cin >> comboStyle;

    switch (comboStyle) {
    case 'S':
        std::cout << "YOOOO that was SICK!";
        break;
    case 'A':
        std::cout << "That was MARVELOUS!";
        break;
    case 'B':
    std::cout << "You can do it!";
        break;
    case 'C':
    std::cout << "Its alright, You Did Okay";
        break;
    case 'D':
    std::cout << "Stay Determined!";
        break;
    default:
        std::cout << "Please only enter in a letter grade (S-D)";
    }

    return 0;
}