#pragma once
#include <cstdint>
#include "FOpenColorIOColorConversionSettings.hpp"
#pragma pack(push, 1)
struct FOpenColorIODisplayConfiguration {
    bool bIsEnabled; // 0x0
    char pad_1[0x7];
    FOpenColorIOColorConversionSettings ColorConfiguration; // 0x8
}; // Size: 0x60
#pragma pack(pop)
