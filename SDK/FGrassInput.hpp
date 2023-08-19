#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
class ULandscapeGrassType;
#pragma pack(push, 1)
struct FGrassInput {
    FName Name; // 0x0
    ULandscapeGrassType* GrassType; // 0x8
    FExpressionInput Input; // 0x10
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
