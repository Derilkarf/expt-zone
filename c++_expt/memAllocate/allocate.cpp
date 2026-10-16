#include <iostream>
#include <new>
#include <pthread.h>

int main(){
  int* numPtr = nullptr;

  try {
    numPtr = new int;

    *numPtr = 40;
    std::cout << "Dynamic Num: " << *numPtr << std::endl;
  } catch (const std::bad_alloc e) {
    return 1;
  }

  delete numPtr;

  return 0;
}
