#include <iostream>

int main() {
    std::string firstName;
    std::string lastName;
    int age;

    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std:: cin >> lastName;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello, " << firstName << "!" << '\n';
    std::cout << "Your age is " << age << " years old." << '\n'; 

    return 0;
}