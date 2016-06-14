// Copyright Igor Bogoslavskyi, year 2016.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <stdio.h>
#include "./lib.h"

int main(int argc, char const *argv[]) {
  MyLibClass<int> my_lib_class;
  int s = my_lib_class.sum(2, 3);
  fprintf(stderr, "res = %d\n", s);
  return 0;
}
