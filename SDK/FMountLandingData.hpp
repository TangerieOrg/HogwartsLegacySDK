#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMountLandingData {
    float TouchdownTime; // 0x0
    float PreTouchdownSpeed; // 0x4
    float PostTouchdownSpeed; // 0x8
}; // Size: 0xc
#pragma pack(pop)
