#include <iostream>

int main() {
    char userInput;
    double temporaryNumb; 
    double newNumb;
    bool nextNumb = true;

    std::cout <<"========== Continual Calculator =============\n";
    std::cout <<"Press 'q' in operator for Quiting.\n\n";

    std::cout << "Enter First Number: ";
    std::cin >> temporaryNumb;

    while(std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Invalid input. Please enter a Number: ";
        std::cin >> temporaryNumb;
    }

    while(nextNumb) {
        std::cout << "Input (+ - * /) or 'q' for quit: ";
        std::cin >> userInput;

        if (userInput == 'q' || userInput == 'Q') {
            nextNumb = false; 
            break;
        }
    
        while(userInput != '+' && userInput != '-' && userInput != '*' && userInput != '/') {
            std::cout << "Please Input A Valid Operator (+ - * /): ";
            std::cin >> userInput;
            
            if(userInput == 'q' || userInput == 'Q') {
                nextNumb = false;
                break;
        }
    } 
    
    if (!nextNumb) {
        break;
    }

    std::cout << "Enter Other Number: ";
    std::cin >> newNumb;

    switch(userInput) {
        case '+': temporaryNumb += newNumb; break;

        case '-': temporaryNumb -= newNumb; break;

        case '*': temporaryNumb *= newNumb; break;

        case '/': 
        
            if(newNumb == 0) {
                std::cout << "Error: Can't divided by zero!\n";
            } else {
                temporaryNumb /= newNumb;
            } break;
    }
        std::cout << "Result: " << temporaryNumb << "\n\n";
    }
    
    std::cout << "================ F I N I S H ================\n";
    std::cout << "Your Final Result = " << temporaryNumb << '\n';
    std::cout << "=============================================\n";
    
    return 0;
}