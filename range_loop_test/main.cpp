#include <stdio.h>
#include <vector>
#include <typeinfo>

int main(int argc, char const* argv[]) {
  std::vector<int> v{1, 2, 3, 4};
  const int* prev = nullptr;
  for (const auto& i : v) {
    if (!prev) {
      prev = &i;
      continue;
    }
    fprintf(stderr, "this: %p, prev: %p\n", &i, prev);
    prev = &i;
  }
  return 0;
}