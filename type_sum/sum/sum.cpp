#include "sum/sum.hpp"

#include "type/decimal.hpp"

TypePtr Sum(TypePtr lhs, TypePtr rhs) {
  return std::make_shared<DecimalType>(1, 2);
}
