#include "dsl.hpp"

#include <iostream>

int main() {
  std::cout << Sum(Nullable(Decimal(1, 2)), Decimal(2, 1)) << std::endl;
}
