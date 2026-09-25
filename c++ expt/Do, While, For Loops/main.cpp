#include <iostream>

int main() {
    std::cout << "--- 1. WHILE LOOP ---\n";
    // RULE: Check condition FIRST, then execute.
    // BEST FOR: When you don't know exactly how many times the loop needs to run.
    
    int battery = 30;

    while (battery < 100) {
        std::cout << "Charging.... " << battery << "%\n";
        battery += 10; 
    }
    std::cout << "Battery Full! " << battery << "%\n\n";

    // CRITICAL: We must update the variable used in the condition!
    // INFINITE LOOP TRIGGER: If you remove 'battery += 10', battery stays at 30 forever. 
    // 30 < 100 is always true, causing the loop to never stop.
    
    // ---------------------------------------------------------

    std::cout << "--- 2. DO-WHILE LOOP ---\n";
    // RULE: Execute FIRST, check condition LATER.
    // BEST FOR: When you want the code to run AT LEAST ONCE, no matter what.
    // Even though 6 is NOT <= 5, this line will print exactly ONE TIME.
    // It runs before it even realizes the condition is false!
    int number = 6; 

    do {
        std::cout << "Number is: " << number << '\n';
        number++;
    } while (number <= 5);
    std::cout << "\n";

    // INFINITE LOOP TRIGGER: If the condition was (number >= 5) and we forgot 'number++', 
    // the number would stay 6 forever, causing an infinite loop.

    // ---------------------------------------------------------

    // RULE: Initialization, Condition, and Update are cleanly packed in one line.
    // BEST FOR: When you know EXACTLY how many times you want to loop.
    // FORMAT: (1. Start ; 2. Condition ; 3. Update)
    

    std::cout << "--- 3. FOR LOOP ---\n";
    for (int index = 10; index >= 0; index--) {
        std::cout << "Countdown: " << index << '\n';
    }
    std::cout << "OOOOO MY PCCCCCCCCCC!!!\n";

    // INFINITE LOOP TRIGGER: If you wrote 'index++' instead of 'index--', 
    // the value would go 11, 12, 13... It will ALWAYS be >= 0.
    return 0;
}