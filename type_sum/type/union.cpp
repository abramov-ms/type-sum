#include "type/union.hpp"

#include <cassert>
#include <string>
#include <sstream>
#include <ranges>
#include <utility>

UnionType::UnionType(std::vector<TypePtr> options)
    : options(std::move(options)) {
  assert(!this->options.empty());
}

std::string UnionType::Display() const {
  std::ostringstream oss;

  assert(!options.empty());
  oss << options[0]->Display();

  for (const auto& option : options | std::views::drop(1)) {
    oss << "|" << option->Display();
  }

  return std::move(oss).str();
}
