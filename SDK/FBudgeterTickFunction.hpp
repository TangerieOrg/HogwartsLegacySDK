#pragma once
#include <cstdint>
#include "FTickFunction.hpp"
#pragma pack(push, 1)
struct FBudgeterTickFunction : public FTickFunction {
    char pad_40[0x8];
}; // Size: 0x48
#pragma pack(pop)
