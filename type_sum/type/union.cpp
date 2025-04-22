#include "type/union.hpp"

#include <cassert>
#include <string>
#include <ranges>
#include <utility>

UnionType::UnionType(std::vector<TypePtr> options)
    : options(std::move(options)) {
  assert(!this->options.empty());
}

std::string UnionType::Display() const {
  auto display = [](const auto& option) {
    return option->Display();
  };

  return options | std::views::transform(display) | std::views::join_with('|') |
         std::ranges::to<std::string>();
}
