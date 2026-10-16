#include <stdio.h>
#include <stdlib.h>

int main(){
  int* numPtr = (int*) malloc(sizeof(int));
  if(numPtr == NULL) {
    return 1;
  } 

  *numPtr = 100;
  printf("Dynamic Num: %d\n", *numPtr);

  free(numPtr);

  return 0;
}
