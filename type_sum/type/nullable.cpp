#include "type/nullable.hpp"

#include <string>
#include <sstream>

std::string NullableType::Display() const {
  std::ostringstream oss;
  oss << non_null->Display() << "?";
  return std::move(oss).str();
}
