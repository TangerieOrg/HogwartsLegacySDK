#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGlobalLightGroupsTimeHMS {
    int32_t Hour; // 0x0
    int32_t Minute; // 0x4
    int32_t Second; // 0x8
    float VarianceMinutesMin; // 0xc
    float VarianceMinutesMax; // 0x10
}; // Size: 0x14
#pragma pack(pop)
