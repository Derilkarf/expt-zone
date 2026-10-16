#include <iostream>

int main() {
    //ternary operator ? / : ;
    //condition ? expression : expression;

    int grade1 = 60; //grade = condition
    grade1 >= 75 ? std::cout << "HOLY MOLY CONGRATS!\n" : std::cout << "It's alright, STAY DETERMINED!\n"; // std::cout = expression

    bool thirsty = false;
    thirsty ? std::cout << "Now it's time to treat some coffe\n" : std::cout << "Meh maybe next time\n";
    
    // experiment zone
    
    int grade2 = 86;
    bool treat = true;
    
    //if else version

    
    if (grade2 >= 75 && treat) {
        std::cout << "THANK GOD I PASSED!, Time to treat myself some coffe!\n";
    } else {
        std::cout << "Oh man thats unfortunate, i think i'll will eating\n";
    }

    //ternary operator version

    std::string result = (grade2 >= 75 && treat) ? "THANK GOD I PASSED!, Time to treat myself some coffe!\n" : "Oh man thats unfortunate, i think i'll will eating\n";
    std::cout << result; 

    return 0;
}