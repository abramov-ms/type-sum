#include "dsl.hpp"

#include <iostream>

int main() {
  std::cout << Nullable(Union(Decimal(1, 2), String(8, false))) << std::endl;
}
