#include "type/decimal.hpp"

#include <string>
#include <sstream>

std::string DecimalType::Display() const {
  std::ostringstream oss;
  oss << "Decimal<" << int_len << ", " << frac_len << ">";
  return std::move(oss).str();
}
