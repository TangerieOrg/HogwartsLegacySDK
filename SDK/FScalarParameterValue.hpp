#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMaterialParameterInfo.hpp"
#pragma pack(push, 1)
struct FScalarParameterValue {
    FMaterialParameterInfo ParameterInfo; // 0x0
    float ParameterValue; // 0x10
    FGuid ExpressionGUID; // 0x14
}; // Size: 0x24
#pragma pack(pop)
