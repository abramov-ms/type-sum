#include "type/union.hpp"

#include <string>
#include <ranges>

std::string UnionType::Display() const {
  auto display = [](const auto& option) {
    return option->Display();
  };

  return options | std::views::transform(display) | std::views::join_with('|') |
         std::ranges::to<std::string>();
}
