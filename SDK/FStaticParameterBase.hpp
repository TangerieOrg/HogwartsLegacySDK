#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMaterialParameterInfo.hpp"
#pragma pack(push, 1)
struct FStaticParameterBase {
    FMaterialParameterInfo ParameterInfo; // 0x0
    bool bOverride; // 0x10
    char pad_11[0x3];
    FGuid ExpressionGUID; // 0x14
}; // Size: 0x24
#pragma pack(pop)
