// Copyright Igor Bogoslavskyi, year 2015.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class A {
  public:
    explicit A(const int x): _x(x) {}
    ~A() {}

    friend ostream &operator <<(ostream &os, const A &a);
  private:
    int _x;
};

ostream &operator <<(ostream &os, const A &a) {
    os << a._x;
    return os;
}


int main(int argc, char const *argv[]) {
    A a(20);
    cout << a << endl;
    return 0;
}
