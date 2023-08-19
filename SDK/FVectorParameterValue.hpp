#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FLinearColor.hpp"
#include "FMaterialParameterInfo.hpp"
#pragma pack(push, 1)
struct FVectorParameterValue {
    FMaterialParameterInfo ParameterInfo; // 0x0
    FLinearColor ParameterValue; // 0x10
    FGuid ExpressionGUID; // 0x20
}; // Size: 0x30
#pragma pack(pop)
