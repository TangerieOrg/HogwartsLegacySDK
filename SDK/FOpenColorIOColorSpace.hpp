#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FOpenColorIOColorSpace {
    FString ColorSpaceName; // 0x0
    int32_t ColorSpaceIndex; // 0x10
    char pad_14[0x4];
    FString FamilyName; // 0x18
}; // Size: 0x28
#pragma pack(pop)
