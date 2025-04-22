#pragma once

#include "type/type.hpp"

#include <string>

struct DecimalType final : IType {
  int int_len;
  int frac_len;

  DecimalType(int int_len, int frac_len)
      : int_len(int_len),
        frac_len(frac_len) {
  }

  std::string Display() const override;
};
