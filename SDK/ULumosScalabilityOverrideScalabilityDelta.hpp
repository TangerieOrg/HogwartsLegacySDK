#pragma once
#include <cstdint>
#include "EPhoenixScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilityOverrideScalabilityDelta : public ULumosScalabilityOverrideWithRule {
public:
    int32_t LevelDelta; // 0x30
    EPhoenixScalabilityLevel MinLevel; // 0x34
    EPhoenixScalabilityLevel MaxLevel; // 0x35
    char pad_36[0x2];
    static ULumosScalabilityOverrideScalabilityDelta* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
