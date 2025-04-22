#include "type/string.hpp"

#include <string>
#include <format>

std::string StringType::Display() const {
  return std::format("String<{}{}>", is_varying ? "0.." : "", len);
}
