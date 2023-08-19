#pragma once
#include <cstdint>
#include "EPhoenixScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilityOverrideScalabilityLevel : public ULumosScalabilityOverrideWithRule {
public:
    EPhoenixScalabilityLevel Level; // 0x30
    char pad_31[0x7];
    static ULumosScalabilityOverrideScalabilityLevel* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
