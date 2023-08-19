#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FHoverDataEvent {
    char pad_0[0x1];
    bool isWayMarker; // 0x1
    char pad_2[0xe];
}; // Size: 0x10
#pragma pack(pop)
