#pragma once
#include <cstdint>
#include "EPhoenixScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilityOverrideCustomScalabilityDelta : public ULumosScalabilityOverrideWithRule {
public:
    FName Custom; // 0x30
    int32_t LevelDelta; // 0x38
    EPhoenixScalabilityLevel MinLevel; // 0x3c
    EPhoenixScalabilityLevel MaxLevel; // 0x3d
    char pad_3e[0x2];
    static ULumosScalabilityOverrideCustomScalabilityDelta* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
