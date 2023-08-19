#pragma once
#include <cstdint>
class UCurveFloat;
#pragma pack(push, 1)
struct FActiveTimeDilationEffect {
    UCurveFloat* TimeDilationCurve; // 0x0
    char pad_8[0x48];
}; // Size: 0x50
#pragma pack(pop)
