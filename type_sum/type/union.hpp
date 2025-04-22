#pragma once

#include "type/type.hpp"

#include <vector>
#include <utility>

struct UnionType final : IType {
  // Options are non-null and distinct.
  std::vector<TypePtr> options;

  explicit UnionType(std::vector<TypePtr> options)
      : options(std::move(options)) {
  }

  std::string Display() const override;
};
