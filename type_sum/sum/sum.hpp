#pragma once

#include "type/type.hpp"

// * String<0..4> + String<15> = String<0..15>
// * Decimal<1, 2> + Decimal<2, 1>? = Decimal<2, 2>?
// * Decimal<1, 0> + String<8> = Decimal<1, 0>|String<8>
// * ...

TypePtr Sum(TypePtr, TypePtr);
