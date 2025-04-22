#include "type/decimal.hpp"

#include <string>
#include <format>

std::string DecimalType::Display() const {
  return std::format("Decimal<{}, {}>", int_len, frac_len);
}
