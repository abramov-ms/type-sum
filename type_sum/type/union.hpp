#pragma once

#include "type/type.hpp"

#include <cassert>
#include <vector>

struct UnionType final : IType {
  // Options are non-null and distinct.
  std::vector<TypePtr> options;

  explicit UnionType(std::vector<TypePtr>);

  std::string Display() const override;
};
