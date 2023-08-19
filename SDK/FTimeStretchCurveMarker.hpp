#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTimeStretchCurveMarker {
    float Time[3]; // 0x0
    float Alpha; // 0xc
}; // Size: 0x10
#pragma pack(pop)
