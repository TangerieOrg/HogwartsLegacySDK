#pragma once
#include <cstdint>
#include "UClothSharedConfigCommon.hpp"
#pragma pack(push, 1)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon {
public:
    int32_t IterationCount; // 0x28
    int32_t MaxIterationCount; // 0x2c
    int32_t SubdivisionCount; // 0x30
    bool bUseLocalSpaceSimulation; // 0x34
    bool bUseXPBDConstraints; // 0x35
    char pad_36[0x2];
    static UChaosClothSharedSimConfig* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
