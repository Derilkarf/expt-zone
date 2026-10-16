#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  srand(time(0));
  char op_list[] = {'+', '-', '*'};
  std::cout << "====== MENTAL MATH ======\n";
  std::cout << "Try Not To Answer Via Paper Or Anything That Can Provide Answer\n";
  std::cout << "Operation ('+', '-', '*')\n\n";
  int score = 0;

  for (int i = 1; i <= 5; i++) {
    int op_index = rand() % 2;
    char op = op_list[op_index];
    int a, b, key;

    if(op == '+'){
      a = rand() % 400 + 100;
      b = rand() % 400 + 100;
      key = a + b;
    } else if (op == '-') {
      a = rand() % 800 + 200;
      b = rand() % a + 50;
      key = a - b;
    } else if (op == '*') {
      a = rand() % 30 + 10;
      b = rand() % 8 + 2;
      key = a * b;
    }

    int user_answer;
    std::cout << "Question " << i << ": " << a << " " << op << " " << b << " = ";
    std::cin >> user_answer;

    if(user_answer == key) {
      std::cout << "Correct! .\n\n" << std::endl;
      score++;
    } else {
      std::cout << "Wrong. Answer: " << key << std::endl;
    }
  }
    std::cout << "Exercise Complete!\n";
    std::cout << "Score: " << score << "/5 ===\n" << std::endl;
    std::cout << "=======================";
    return 0;
}
