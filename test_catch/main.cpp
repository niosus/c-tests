// Copyright Igor Bogoslavskyi, year 2016.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <stdio.h>

#include "./lib.h"

int main(int argc, char const *argv[]) {
  fprintf(stderr, "printing 1: %d\n", get_me_one());
  fprintf(stderr, "printing hello : %s\n", get_me_hello().c_str());
  return 0;
}
