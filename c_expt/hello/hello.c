#include <asm-generic/errno-base.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int squareRootFormula(float a, float b, float c, float *r1, float *r2){
  if (a == 0) return 0;

  float d = pow(b, 2) - 4 * a * c;
  if (d < 0) return 0;

  float square = sqrtf(d);
  *r1 = (-b + square) / (2 * a);
  *r2 = (-b - square) / (2 * a);
  return 1;
}

void fibonacci(int n){
  long long f1 = 0, f2 = 1, newTerm;
  for(int i = 0; i <= n; i++){
    printf("%lld", f1);
    newTerm = f1 + f2;
    f1 = f2;
    f2 = newTerm;
  }
}

int main(){
  float a, b, c, r1, r2;
  bool quit = true;
  bool skip = true;

  printf("==============================\n");
  printf("Finding A Square Root of X\n");
  printf("==============================\n");

  printf("Input A Value (Or Quit (q) / Skip (s) ): ");
  scanf("%f", &a);
  if(quit){
    fibonacci(n);
  } 
  printf("Input B Value: ");
  scanf("%f", &b);

  printf("Input C Value: ");
  scanf("%f", &c);


  if(!squareRootFormula(a, b, c, &r1, &r2) ){
    printf("ERROR! Not a Real Roots\n");
    return 1;
  }

    printf("Result of X1: %f\n", r1);
    printf("Result pf X2: %f\n", r2);
  printf("==============================\n");


  printf("==============================\n");
  printf("FIBONACCI NUMBER UP TO 100.000\n");
  printf("==============================\n");

  int n = 10;
  fibonacci(n);
  return 0;

}
