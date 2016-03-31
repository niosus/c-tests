// Copyright Igor Bogoslavskyi, year 2015.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <stdio.h>
#include <vector>

template <typename T>
class Base {
 public:
  Base() : _member(0) {}
  virtual ~Base() {}
  T member() const { return _member; }

 protected:
  T _member;
};

template <typename T>
class Derived : public Base<T> {
 public:
  Derived() : Base<T>() { this->_member = 10; }
  virtual ~Derived() {}
};

int main(int argc, char const* argv[]) {
  Base<int>* obj = new Derived<int>;
  fprintf(stderr, "member is: %d\n", obj->member());
  return 0;
}

// answer to this problem is here:
// https://isocpp.org/wiki/faq/templates#nondependent-name-lookup-types
