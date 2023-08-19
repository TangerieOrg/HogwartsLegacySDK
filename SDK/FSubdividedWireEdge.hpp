#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSubdividedWireEdge {
    int32_t EdgeVertex0PositionIndex; // 0x0
    int32_t EdgeVertex1PositionIndex; // 0x4
    char pad_8[0x4];
}; // Size: 0xc
#pragma pack(pop)
