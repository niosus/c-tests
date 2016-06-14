// Copyright Igor Bogoslavskyi, year 2016.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <stdio.h>
#include "./lib.h"

int main(int argc, char const *argv[]) {
  MyLibClass<float> my_lib_class;
  float s = my_lib_class.sum(2.0f, 3.0f);
  fprintf(stderr, "res = %f\n", s);
  return 0;
}
