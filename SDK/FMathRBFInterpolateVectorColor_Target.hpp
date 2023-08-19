#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMathRBFInterpolateVectorColor_Target {
    FVector Target; // 0x0
    FLinearColor Value; // 0xc
}; // Size: 0x1c
#pragma pack(pop)
