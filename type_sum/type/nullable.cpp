#include "type/nullable.hpp"

#include <string>
#include <format>

std::string NullableType::Display() const {
  return std::format("{}?", non_null->Display());
}
