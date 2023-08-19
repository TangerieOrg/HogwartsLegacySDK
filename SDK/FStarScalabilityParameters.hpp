#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStarScalabilityParameters {
    float LowLimitStarsK; // 0x0
    float MediumLimitStarsK; // 0x4
    float HighLimitStarsK; // 0x8
    float EpicLimitStarsK; // 0xc
    int32_t MinStars; // 0x10
    bool bUseLimitStars; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
