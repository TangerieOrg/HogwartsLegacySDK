#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPackedNormal {
    uint8_t X; // 0x0
    uint8_t Y; // 0x1
    uint8_t Z; // 0x2
    uint8_t W; // 0x3
}; // Size: 0x4
#pragma pack(pop)
