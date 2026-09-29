#include <iostream>

void opening() {
    int num;

    do{
        std::cout << "Enter how many enemies do you like to call: \n";
        std::cin >> num;
        num++;
        if(num > 100) {
            std::cout << "Too Much!\n";
        } else if(num < 3) {
            std::cout << "Too Little!\n";
        } else { 
            std::cout << "Affirmative\nBeginning the execution... \n";
        }
    } while(num < 100 || num > 100); 
        
}

int main() {
    opening();
    
    return 0;
}