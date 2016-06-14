// Copyright Igor Bogoslavskyi, year 2016.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include "./lib.h"

template <class T>
T MyLibClass<T>::sum(T a, T b) const {
  return a + b;
}

template class MyLibClass<int>;
template class MyLibClass<float>;
