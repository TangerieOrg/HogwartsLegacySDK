#pragma once
#include <cstdint>
#include "EPhoenixScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilityOverrideCustomScalabilityLevel : public ULumosScalabilityOverrideWithRule {
public:
    FName Custom; // 0x30
    EPhoenixScalabilityLevel Level; // 0x38
    char pad_39[0x7];
    static ULumosScalabilityOverrideCustomScalabilityLevel* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
