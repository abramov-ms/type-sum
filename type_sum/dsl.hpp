#pragma once

#include "type/decimal.hpp"
#include "type/string.hpp"
#include "type/nullable.hpp"
#include "type/union.hpp"

#include "sum/sum.hpp"

#include <ostream>

inline TypePtr Decimal(int int_len, int frac_len) {
  return std::make_shared<DecimalType>(int_len, frac_len);
}

inline TypePtr String(size_t len, bool is_varying) {
  return std::make_shared<StringType>(len, is_varying);
}

inline TypePtr Nullable(TypePtr non_null) {
  return std::make_shared<NullableType>(std::move(non_null));
}

template <std::same_as<TypePtr>... Args>
TypePtr Union(Args&&... args) {
  return std::make_shared<UnionType>(std::vector{std::forward<Args>(args)...});
}

inline TypePtr operator+(TypePtr t, TypePtr u) {
  return Sum(std::move(t), std::move(u));
}

inline std::ostream& operator<<(std::ostream& os, const TypePtr& t) {
  return os << t->Display();
}
