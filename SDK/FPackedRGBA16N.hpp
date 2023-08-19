#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPackedRGBA16N {
    int32_t XY; // 0x0
    int32_t ZW; // 0x4
}; // Size: 0x8
#pragma pack(pop)
