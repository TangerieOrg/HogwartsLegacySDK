#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMaterialParameterInfo.hpp"
class URuntimeVirtualTexture;
#pragma pack(push, 1)
struct FRuntimeVirtualTextureParameterValue {
    FMaterialParameterInfo ParameterInfo; // 0x0
    URuntimeVirtualTexture* ParameterValue; // 0x10
    FGuid ExpressionGUID; // 0x18
}; // Size: 0x28
#pragma pack(pop)
