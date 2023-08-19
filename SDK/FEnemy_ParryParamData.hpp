#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnemy_ParryParamData {
    bool bWindowOpenUntilImpact; // 0x0
    char pad_1[0x3];
    float WindowLength; // 0x4
    float LeadInSkipLength; // 0x8
    bool bCanSuspendRelease; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
