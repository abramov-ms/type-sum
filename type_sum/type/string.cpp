#include "type/string.hpp"

#include <string>
#include <sstream>

std::string StringType::Display() const {
  std::ostringstream oss;
  oss << "String<" << (is_varying ? "0.." : "") << ", " << len << ">";
  return std::move(oss).str();
}
