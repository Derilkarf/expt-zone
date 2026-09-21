#include <iostream>

int main() {
    
    int correctAnswers = 16;
    int totalQuestions = 30;
    double score = correctAnswers / (double) totalQuestions * 100;

    std::cout << "Your exam score is: " << score << "%";

    return 0;
}