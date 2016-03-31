// Copyright Igor Bogoslavskyi, year 2015.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <stdio.h>

class Foo {
 public:
  static Foo* instance() {
    if (!Foo::_instance) {
      Foo::_instance = new Foo();
    }
    return Foo::_instance;
  }

  int bar() const { return _bar; }

 private:
  static Foo* _instance;

  int _bar;

  Foo() : _bar(10) {}
  Foo(const Foo& foo) {}
};

Foo* Foo::_instance = nullptr;

int main(int argc, char const* argv[]) {
  Foo* a = Foo::instance();
  fprintf(stderr, "bar = %d\n", a->bar());
  return 0;
}