#include <math.h>
#include <stdio.h>

class Radians {
 public:
  class DoubleIsRadians {};  // a tag to prevent using raw constructor
  explicit constexpr Radians(DoubleIsRadians, double angle)
    : _raw_angle{angle} {}

  inline double val() const {
    return _raw_angle;
  }
 protected:
  double _raw_angle;
};

constexpr Radians operator "" _rad(long double angle) {
  return Radians{ Radians::DoubleIsRadians{}, static_cast<double>(angle) };
}

constexpr Radians operator "" _deg(long double angle) {
  return Radians{
    Radians::DoubleIsRadians{}, static_cast<double>(angle * M_PI / 180) };
}