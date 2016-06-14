#include "catch.hpp"

#include "../lib.h"

TEST_CASE("one", "[lib]") { REQUIRE(get_me_one() == 1); }
TEST_CASE("hello", "[lib]") { REQUIRE(get_me_hello() == "hello"); }