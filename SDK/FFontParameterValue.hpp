#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMaterialParameterInfo.hpp"
class UFont;
#pragma pack(push, 1)
struct FFontParameterValue {
    FMaterialParameterInfo ParameterInfo; // 0x0
    UFont* FontValue; // 0x10
    int32_t FontPage; // 0x18
    FGuid ExpressionGUID; // 0x1c
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
