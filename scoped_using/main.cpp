// Copyright Igor Bogoslavskyi, year 2016.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <stdio.h>
#include <string>

class A {
  // unfortunately this is illigal
  using std::string;

 public:
  explicit A(const string& smth) {
    fprintf(stderr, "something = %s\n", smth.c_str());
  }
};

int main(int argc, char const* argv[]) {
  auto str = "hello";
  auto a = A(str);
  return 0;
}
