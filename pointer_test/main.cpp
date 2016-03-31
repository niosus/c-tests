#include <stdio.h>

void f(void* p) {
  int* pp = (int*) p;
  *pp = 10;
}

int main(int argc, char const *argv[]) {
  int a = 5;
  printf("%d\n", a);
  f(&a);
  printf("%d\n", a);
  return 0;
}