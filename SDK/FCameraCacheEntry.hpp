#pragma once
#include <cstdint>
#include "FMinimalViewInfo.hpp"
#pragma pack(push, 1)
struct FCameraCacheEntry {
    float Timestamp; // 0x0
    char pad_4[0xc];
    FMinimalViewInfo POV; // 0x10
}; // Size: 0x690
#pragma pack(pop)
