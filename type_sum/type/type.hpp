#pragma once

#include <string>
#include <memory>

struct IType {
  virtual ~IType() = default;
  virtual std::string Display() const = 0;
};

using TypePtr = std::shared_ptr<const IType>;
