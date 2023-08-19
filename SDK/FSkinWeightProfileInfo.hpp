#pragma once
#include <cstdint>
#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
#pragma pack(push, 1)
struct FSkinWeightProfileInfo {
    FName Name; // 0x0
    FPerPlatformBool DefaultProfile; // 0x8
    char pad_9[0x3];
    FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
}; // Size: 0x10
#pragma pack(pop)
