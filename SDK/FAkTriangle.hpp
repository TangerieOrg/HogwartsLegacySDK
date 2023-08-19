#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAkTriangle {
    uint16_t Point0; // 0x0
    uint16_t Point1; // 0x2
    uint16_t Point2; // 0x4
    uint16_t Surface; // 0x6
}; // Size: 0x8
#pragma pack(pop)
