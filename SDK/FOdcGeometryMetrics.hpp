#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FOdcGeometryMetrics {
    float TraceLedgeRadius; // 0x0
    float TraceLedgeIntoWallAdjust; // 0x4
    float TraceLedgeUpAdjust; // 0x8
    float TraceLedgeDownCast; // 0xc
    float LinkOffsetFromLadderEnds; // 0x10
}; // Size: 0x14
#pragma pack(pop)
