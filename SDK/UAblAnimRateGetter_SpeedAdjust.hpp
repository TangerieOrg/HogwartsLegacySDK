#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UAblAnimRateGetter.hpp"
#pragma pack(push, 1)
class UAblAnimRateGetter_SpeedAdjust : public UAblAnimRateGetter {
public:
    FVector2D AngleRange; // 0x28
    FVector2D AnimRateRange; // 0x30
    float StairsJogMultiplier; // 0x38
    char pad_3c[0x4];
    static UAblAnimRateGetter_SpeedAdjust* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
