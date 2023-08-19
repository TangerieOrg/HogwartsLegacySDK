#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class UPhysicalMaterial;
#pragma pack(push, 1)
class UMultiFX2_SetPhysicalMaterial : public UMultiFX2_Filtered {
public:
    UPhysicalMaterial* PhysicalMaterial; // 0x68
    static UMultiFX2_SetPhysicalMaterial* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
