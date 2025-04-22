#pragma once

#include "type/type.hpp"

#include <string>

struct StringType final : IType {
  size_t len;
  bool is_varying;

  StringType(size_t len, bool is_varying)
      : len(len),
        is_varying(is_varying) {
  }

  std::string Display() const override;
};
