#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWeatherSequenceInfo {
    char pad_0[0x8];
    FName Name; // 0x8
    char pad_10[0x28];
}; // Size: 0x38
#pragma pack(pop)
