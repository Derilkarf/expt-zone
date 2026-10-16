#include <iostream>
#include <thread>
#include <chrono>

int main() {
    //Continue
    
    for(int i = 1; i <= 100; ++i) {
        if(i == 15) {
            std::cout << "keep it up " << i << '\n';
        } else if(i == 50) {
            std::cout << "Almost there " << i << '\n';
        } else if(i == 75) {
            std::cout << i << " Lets Take a break for 3 seconds" << '\n';
            std::this_thread::sleep_for(std::chrono::seconds(3));
            std::cout << "Alright Lets go\n";
            continue;
        } 
        std::cout << i << '\n';
    }
    
    //break
    for(int grind = 1; grind <= 100; ++grind) {
        if(grind == 50) {
            std::cout << "Let's take a break an continue tomorrow";
            break;
        } std::cout << grind << '\n';

    } 
    return 0;
}