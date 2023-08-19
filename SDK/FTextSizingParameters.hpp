#pragma once
#include <cstdint>
#include "FVector2D.hpp"
class UFont;
#pragma pack(push, 1)
struct FTextSizingParameters {
    float DrawX; // 0x0
    float DrawY; // 0x4
    float DrawXL; // 0x8
    float DrawYL; // 0xc
    FVector2D Scaling; // 0x10
    UFont* DrawFont; // 0x18
    FVector2D SpacingAdjust; // 0x20
}; // Size: 0x28
#pragma pack(pop)
