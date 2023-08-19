#pragma once
#include <cstdint>
#include "ULumosScalabilityOverrideWithRule.hpp"
class ULumosScalabilityAsset;
#pragma pack(push, 1)
class ULumosScalabilityOverride : public ULumosScalabilityOverrideWithRule {
public:
    ULumosScalabilityAsset* LumosAsset; // 0x30
    static ULumosScalabilityOverride* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
