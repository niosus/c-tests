// Copyright Igor Bogoslavskyi, year 2015.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <stdio.h>

class Base {
  friend class BaseBuilder;
 public:
  void setA(int a) { _a = a; }
  void setB(int b) { _b = b; }
  int a() { return _a; }
  int b() { return _b; }
 private:
  Base() {_a = -1; _b = -1; }
  int _a, _b;
};

class BaseBuilder {
 public:
  BaseBuilder(): obj() {
    fprintf(stderr, "called\n");
  }
  BaseBuilder& withA(int a) {
    obj.setA(a);
    return *this;
  }
  BaseBuilder& withB(int b) {
    obj.setB(b);
    return *this;
  }
  Base* construct() {
    return &obj;
  }
 private:
  Base obj;
};


int main(int argc, char const *argv[]) {
  Base* obj = BaseBuilder().withA(10).withB(20).construct();
  fprintf(stderr, "a = %d, b= %d\n", obj->a(), obj->b());
  return 0;
}