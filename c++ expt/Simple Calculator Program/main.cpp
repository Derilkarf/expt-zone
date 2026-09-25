#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double num3;
    double result;

    std::cout << "-----------CALCULATOR-----------\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;
    
    while(op != '+' && op != '-' && op != '*' && op != '/') {
        std::cout << "Invalid operator! Please enter only (+ - * /): ";
        std::cin >> op;
    }

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    std::cout << "Enter #3: ";
    std::cin >> num3;

    switch(op) {
        case '+':
        result = num1 + num2 + num3;
        std::cout << "Result: " << result << '\n';
        break;

        case '-':
        result = num1 - num2 - num3;
        std::cout << "Result: " << result << '\n';
        break;

        case '*':
        result = num1 * num2 * num3;
        std::cout << "Result: " << result << '\n';
        break;

        case '/':
        result = num1 / num2 / num3;
        std::cout << "Result: " << result << '\n';
        break;
    default:
        std::cout << "That was not a valid response";
    }

    std::cout << "--------------------------------";   
    return 0;
}