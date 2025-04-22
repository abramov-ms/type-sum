#pragma once

#include "type/type.hpp"

#include <string>
#include <utility>

struct NullableType final : IType {
  TypePtr non_null;

  explicit NullableType(TypePtr non_null)
      : non_null(std::move(non_null)) {
  }

  std::string Display() const override;
};
