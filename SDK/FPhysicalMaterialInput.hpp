#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
class UPhysicalMaterial;
#pragma pack(push, 1)
struct FPhysicalMaterialInput {
    UPhysicalMaterial* PhysicalMaterial; // 0x0
    FExpressionInput Input; // 0x8
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
