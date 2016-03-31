// Copyright Igor Bogoslavskyi, year 2015.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <stdio.h>

class Base {
 public:
  virtual ~Base() {}
  virtual void f() { fprintf(stderr, "Base\n"); }
};

class Derived : public Base {
 public:
  virtual ~Derived() {}
  void f() override { fprintf(stderr, "Derived\n"); }
};

class Derived2 : public Derived {
 public:
  virtual ~Derived2() {}
  void f() override {
    fprintf(stderr, "Derived2\n");
    Derived::f();
    Base::f();
  }
};

int main(int argc, char const* argv[]) {
  Base* o = new Derived2{};
  o->f();
  return 0;
}